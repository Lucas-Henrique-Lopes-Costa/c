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

  int menor, maior;

  for (int i = 0; i < n; i++)
  {
    int contMaiores = 0, contMenores = 0;

    for (int j = 0; j < n; j++)
    {
      if (vetor[i] > vetor[j])
        contMaiores++;
      if (vetor[i] < vetor[j])
        contMenores++;
    }

    if (contMaiores == n - 2) // Se o elemento for o segundo maior
      maior = i;

    if (contMenores == n - 2) // Se o elemento for o segundo menor
      menor = i;
  }

  float *novoVetor = new float[n - 2];
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (i != menor && i != maior)
    {
      novoVetor[j] = vetor[i];
      j++;
    }
  }

  for (int i = 0; i < n - 2; i++)
    cout << novoVetor[i] << endl;

  delete[] vetor;

  return 0;
}
