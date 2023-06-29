/*
Faça um programa que receba o tamanho N de um vetor e o preencha. Encontre o segundo menor e o segundo maior elementos, reduza o vetor em duas posições e preencha o novo vetor com os demais elementos, excluindo os dois elementos identificados. Imprima o novo vetor.

Entradas
int n - Tamanho do vetor.
float vet[n] - Vetor que será preenchido.

Saídas:
Novo vetor, retirando o segundo menor e segundo maior elementos (float).

Exemplos de Entradas e Saídas:
Entradas:
4
3
1
6
5

Saídas:
1
6
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  float *vetor = new float[n];

  for (int i = 0; i < n; i++)
    cin >> vetor[i];

  // achando o indice do segundo maior e do segundo menor
  int indiceSegundoMaior = 0;

  float A;
  float B;

  if (vetor[0] > vetor[1])
  {
    A = vetor[0];
    B = vetor[1];
  }
  else
  {
    A = vetor[1];
    B = vetor[0];
  }

  for (int i = 2; i < n; i++)
  {
    if (vetor[i] > A)
    {
      B = A;
      A = vetor[i];
      indiceSegundoMaior = i;
    }
    else if (vetor[i] > B)
    {
      B = vetor[i];
      indiceSegundoMaior = i;
    }
  }

  // cout << "Segundo maior: " << vetor[indiceSegundoMaior] << endl;

  int indiceSegundoMenor = 0;

  if (vetor[0] < vetor[1])
  {
    A = vetor[0];
    B = vetor[1];
  }
  else
  {
    A = vetor[1];
    B = vetor[0];
  }

  for (int i = 2; i < n; i++)
  {
    if (vetor[i] < A)
    {
      B = A;
      A = vetor[i];
      indiceSegundoMenor = i;
    }
    else if (vetor[i] < B)
    {
      B = vetor[i];
      indiceSegundoMenor = i;
    }
  }

  // cout << "Segundo menor: " << vetor[indiceSegundoMenor] << endl;

  // imprimindo apenas os que não são o segundo maior e o segundo menor
  if (n > 2)
  {
    for (int i = 0; i < n; i++)
    {
      if (i != indiceSegundoMaior and i != indiceSegundoMenor)
      {
        cout << vetor[i] << endl;
      }
    }
  }

  return 0;
}
