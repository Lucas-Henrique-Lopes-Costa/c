/*
Seus amigos descobriram que você "mexe com informática" e pediram para você fazer um programa para ajudar a organizar o bolão da copa. Para isso, você verifica que precisará implementar um algoritmo para cadastrar, ordenar e buscar valores num vetor de registros. Cada registro conterá os seguintes dados: número do time, nome do time (sem espaços), quantidade de gols marcados. Como outro colega irá melhorar seu aplicativo, vocês decidem que o programa será construído utilizando módulos.

Só é permitido usar um dos seguintes métodos: Insertion sort, Selection sort ou Shell sort.

Assim, o programa deve ter módulos para:

ler valores, preenchendo o vetor de registros;
ordenar os elementos de um vetor, utilizando o número do time como chave, utilizando um dos métodos vistos em sala de aula;
procurar um elemento num vetor, usando busca sequencial, retornando sua posição no vetor.
Outros módulos são opcionais.

O módulo principal deve:

ler a quantidade de elementos a ser processada;
ativar o módulo que lê os elementos do vetor;
ler o valor procurado, no caso o número do time;
ativar o módulo que ordena o vetor pelo número do time;
ativar o módulo que busca um elemento num vetor, para procurar o elemento no vetor ordenado e depois escrever a posição do valor no vetor ordenado. Caso o elemento não esteja no vetor, a posição deve ser -1. Caso o elemento seja encontrado, imprimir ainda o nome do time e o número de gols marcados.
A ordem de entrada dos dados dos registros é a seguinte:

num_do_time   nome_do_time   gols_marcados
Exemplo de entrada:

6
1 mexico 4
3 alemanha 2
2 porto_rico 1
4 inglaterra 2
5 argentina 5
6 italia 2
3
Exemplo de saída:

2
alemanha 2
Exemplo de entrada:

10
93 narnia 50
100 hodor 1
1 oz 1
24 sitio_picapau 101
12 judas_perdeu_botas 3
9 atlantida 4
22 galateia 8
13 micalateia 3
34 parnaso 4
51 brazilzilzil 2
101
Exemplo de saída:

-1
Exemplo de entrada:

10
93 narnia 50
100 hodor 1
1 oz 1
24 sitio_picapau 101
12 judas_perdeu_botas 3
9 atlantida 4
22 galateia 8
13 micalateia 3
34 parnaso 4
51 brazilzilzil 2
13
Exemplo de saída:

3
micalateia 3
*/

#include <iostream>
using namespace std;

struct Time
{
  int numero;
  string nome;
  int gols;
};

void leitura(Time vet[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    cin >> vet[i].numero;
    cin >> vet[i].nome;
    cin >> vet[i].gols;
  }
}

void ordenacao(Time vet[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < n; j++)
    {
      if (vet[j].numero < vet[menor].numero)
      {
        menor = j;
      }
    }
    swap(vet[menor], vet[i]);
  }
}

void impressao(Time vet[], int tam, int numAlvo)
{
  int cont = 0;
  for (int i = 0; i < tam; i++)
  {
    if (vet[i].numero == numAlvo)
    {
      cout << i << endl;
      cout << vet[i].nome << " " << vet[i].gols << endl;
      cont++;
    }
  }
  if (cont == 0)
  {
    cout << -1 << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  Time vet[n];

  leitura(vet, n);

  ordenacao(vet, n);

  int numProcurado;
  cin >> numProcurado;

  impressao(vet, n, numProcurado);

  return 0;
}