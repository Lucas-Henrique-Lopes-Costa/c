#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números positivos e a soma dos números negativos desse vetor.

    Obs: para soluções em Python utilize as listas padrões da linguagem ao invés de vetores.

    Entrada:

    Dez números reais (a serem guardados em um vetor).
    Saída:

    Quantidade de números positivos no vetor.
    Soma dos números negativos do vetor.
    Exemplo de entrada:

    9.4 2.5 1 5.9 1.6 -1 -6.7 -8.1 -2.3 -9.5
    Exemplo de saída:

    5
    -27.6
  */

  double vetor[10];

  for (int i = 0; i < 10; i++)
  {
    cin >> vetor[i];
  }

  int quantidadePositivos = 0;

  for (int i = 0; i < 10; i++)
  {
    if (vetor[i] >= 0)
    {
      quantidadePositivos++;
    }
  }

  cout << quantidadePositivos << endl;

  double somaNegativos = 0;

  for (int i = 0; i < 10; i++)
  {
    if (vetor[i] < 0)
    {
      somaNegativos += vetor[i];
    }
  }

  cout << somaNegativos << endl;

  return 0;
}