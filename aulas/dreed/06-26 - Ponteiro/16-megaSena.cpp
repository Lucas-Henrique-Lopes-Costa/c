/*
Declare um registro para armazenar um resultado de um sorteio da mega sena. Faça um programa que receba do usuário uma quantidade de sorteios e as dezenas sorteadas, armazenando-as em um vetor alocado dinamicamente. Faça então um subprograma que receba esse vetor e retorne um ponteiro para o registro que tenha a maior soma de dezenas sorteadas. Por fim, exiba os dados do registro retornado.

Entrada:
Um número indicando a quantidade de sorteios.
As dezenas sorteadas em cada sorteio (vetor alocado dinamicamente).

Saída:
As dezenas do registro que tem a maior soma de dezenas sorteadas.

Exemplo de entrada:
3
41 44 48 50 54 57
02 17 22 24 48 51
14 34 46 47 56 57

Exemplo de saída:
41 44 48 50 54 57
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct megaSena
{
  int d1;
  int d2;
  int d3;
  int d4;
  int d5;
  int d6;
};

int main()
{
  int n;
  cin >> n;

  megaSena *sorteios = new megaSena[n];

  for (int i = 0; i < n; i++)
  {
    cin >> sorteios[i].d1;
    cin >> sorteios[i].d2;
    cin >> sorteios[i].d3;
    cin >> sorteios[i].d4;
    cin >> sorteios[i].d5;
    cin >> sorteios[i].d6;
  }

  int *maior = new int[6];
  maior[0] = sorteios[0].d1;
  maior[1] = sorteios[0].d2;
  maior[2] = sorteios[0].d3;
  maior[3] = sorteios[0].d4;
  maior[4] = sorteios[0].d5;
  maior[5] = sorteios[0].d6;

  for (int i = 1; i < n; i++)
  {
    int somaMaior = maior[0] + maior[1] + maior[2] + maior[3] + maior[4] + maior[5];
    int somaAtual = sorteios[i].d1 + sorteios[i].d2 + sorteios[i].d3 + sorteios[i].d4 + sorteios[i].d5 + sorteios[i].d6;

    if (somaAtual > somaMaior)
    {
      maior[0] = sorteios[i].d1;
      maior[1] = sorteios[i].d2;
      maior[2] = sorteios[i].d3;
      maior[3] = sorteios[i].d4;
      maior[4] = sorteios[i].d5;
      maior[5] = sorteios[i].d6;
    }
  }

  cout << maior[0] << " " << maior[1] << " " << maior[2] << " " << maior[3] << " " << maior[4] << " " << maior[5] << endl;


  return 0;
}
