/*
A Operação Lava Jato deflagrada pela Polícia Federal em 2014 tem descoberto inúmeros casos de corrupção envolvendo políticos, grandes empresários, doleiros, entre outros. A operação é dividida em fases e, geralmente, essas fases possuem um número e um nome.

Suponha que alguém criou um arquivo chamado fases.txt e colocou nele o número e o nome de várias das operações da Lava Jato. Faça um programa que leia esse arquivo e um número K da entrada padrão e mostre na saída padrão os nomes das K primeiras operações que aparecem no arquivo ordenadas de forma decrescente pelo número da operação e as demais em ordem crescente.

Seu programa deve usar o método InsertionSort e não pode fazer uso de vetores auxiliares.

Obs: considere que os nomes das operações não possuem espaços e que o valor de K é no mínimo zero e no máximo o número de operações presentes no arquivo.

Entradas:
Arquivo fases.txt contendo em cada linha um número e um nome de uma fase da Lava Jato.
Um número K, sendo 0 <= K <= número de operações existentes no arquivo.

Saídas:
Os nomes das K primeiras operações do arquivo em ordem decrescente de número (um em cada linha).
Os nomes operações restantes do arquivo em ordem crescente de número (um em cada linha).

Exemplo de Entrada (arquivo fases.txt):
33 RestaUm
7 JuizoFinal
31 Abismo
26 Xepa
10 QuePaisEhEsse
23 Acaraje
17 Pixuleco

Exemplo de Entrada (entrada padrão):
4

Exemplo de Saída:
RestaUm
Abismo
Xepa
JuizoFinal
QuePaisEhEsse
Pixuleco
Acaraje
*/
#include <iostream>
#include <fstream>
using namespace std;

struct Fase
{
  int numero;
  string nome;
  bool jaImprimiu;
};

int main()
{
  ifstream arquivo("fases.txt");
  int k;
  cin >> k;

  Fase fases[100];
  int n = 0;
  
  while (arquivo >> fases[n].numero >> fases[n].nome)
    n++;

  // pegando os k primeiros e ordenando eles
  for (int i = 1; i < k; i++)
  {
    Fase aux = fases[i];
    int j = i - 1;
    while (j >= 0 && aux.numero > fases[j].numero)
    {
      fases[j + 1] = fases[j];
      j--;
    }
    fases[j + 1] = aux;
  }

  // imprimindo os k primeiros
  for (int i = 0; i < k; i++)
    cout << fases[i].nome << endl;

  // ordenando o restante de forma crescente
  for (int i = k; i < n; i++)
  {
    Fase aux = fases[i];
    int j = i - 1;
    while (j >= k && aux.numero < fases[j].numero)
    {
      fases[j + 1] = fases[j];
      j--;
    }
    fases[j + 1] = aux;
  }

  // imprimindo o restante
  for (int i = k; i < n; i++)
    cout << fases[i].nome << endl;

  return 0;
}