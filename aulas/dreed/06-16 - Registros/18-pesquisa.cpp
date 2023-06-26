/*
Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um de seus novos produtos lançados no mercado. Faça um programa que gera um relatório contendo informações (ver abaixo) a respeito da pesquisa. O programa deve usar registros para armazenar dados de entrevistados.

Entradas:

Número de entrevistados,
Os dados de cada entrevistado:
sexo (um caractere, que pode ser M ou F),
idade (um número inteiro) e
resposta (um caractere, que pode ser S ou N).
Saídas:

Número de pessoas que responderam SIM.
Número de pessoas que responderam NÃO.
Número de pessoas maiores de 18 anos que gostaram do produto.
Número de pessoas menores de 18 anos que não gostaram do produto.
Número de pessoas maiores de 18 anos, do sexo feminino que não gostaram do produto.
Número de pessoas menores de 18 anos, do sexo masculino que gostaram do produto.
Exemplo de entrada:

6
M 16 S
M 23 S
F 15 N
M 29 N
F 32 S
M 22 S
Exemplo de saída:

4
2
3
1
0
1
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Entrevistados
{
  char sexo;
  int idade;
  char resposta;
};

int main()
{
  int n;
  cin >> n;

  Entrevistados pessoa[n];

  int sim = 0, nao = 0, maior18sim = 0, menor18nao = 0, maior18naoFeminino = 0, menor18simMasculino = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> pessoa[i].sexo >> pessoa[i].idade >> pessoa[i].resposta;

    if (pessoa[i].resposta == 'S')
    {
      sim++;
    }
    else
    {
      nao++;
    }

    if (pessoa[i].idade > 18 and pessoa[i].resposta == 'S')
    {
      maior18sim++;
    }
    else if (pessoa[i].idade < 18 and pessoa[i].resposta == 'N')
    {
      menor18nao++;
    }
    else if (pessoa[i].idade > 18 and pessoa[i].resposta == 'N' and pessoa[i].sexo == 'F')
    {
      maior18naoFeminino++;
    }
    else if (pessoa[i].idade < 18 and pessoa[i].resposta == 'S' and pessoa[i].sexo == 'M')
    {
      menor18simMasculino++;
    }
  }

  cout << sim << endl;
  cout << nao << endl;
  cout << maior18sim << endl;
  cout << menor18nao << endl;
  cout << maior18naoFeminino << endl;
  cout << menor18simMasculino << endl;

  return 0;
}
