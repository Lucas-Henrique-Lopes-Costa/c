#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que leia um vetor de números inteiros, encontre e escreva o maior e o menor elemento e suas respectivas posições.

    Entradas:

    a quantidade de elementos do vetor
    cada elemento do vetor
    Saídas:

    o maior valor do vetor
    o menor valor do vetor
    o índice do maior valor do vetor
    o índice do menor valor do vetor
    É obrigatório que a leitura de todos os elementos do vetor seja feita antes do processamento dos elementos do vetor.

    Exemplo de entrada:

    4
    2 5 7 3
    Exemplo de saída:

    7 2 2 0
  */

  int n;
  cin >> n;
  int vetor[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  int menor = vetor[0];

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] < menor)
    {
      menor = vetor[i];
    }
  }

  int maior = menor;

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }

  int posicaoMenor = 0;

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] == menor)
    {
      posicaoMenor = i;
    }
  }

  int posicaoMaior = 0;

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] == maior)
    {
      posicaoMaior = i;
    }
  }

  cout << maior << " " << menor << " "
       << posicaoMaior << " " << posicaoMenor << endl;

  return 0;
}