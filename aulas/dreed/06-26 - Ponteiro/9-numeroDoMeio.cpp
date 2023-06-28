/*
Faça um programa que leia um conjunto de números inteiros positivos até que seja lido o valor -1. Esses valores devem ser armazenados em um vetor com tamanho inicial igual a 2. Sempre que necessário o vetor deve aumentar de tamanho em 2 posições. Após a leitura de todos os valores, seu programa imprimir o valor do elemento do meio do vetor dividido por 2. Caso a quantidade de valores lidos seja par, seu programa deve calcular a média entre os elementos do meio.

Entradas:
Valores inteiros positivos até que seja digitado o valor -1

Saídas:
Elemento do meio dividido por 2 (ou média entre os elementos do meio).

Exemplo de Entrada:
4 2 19 7 8 -1

Exemplo de Saída:
9.5

Exemplo de Entrada:
7 4 6 9 -1

Exemplo de Saída:
5
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int *vetor = new int[2];

  int tamanho = 2;
  int n, i = 0;

  while (n != -1)
  {
    cin >> n;

    vetor[i] = n;
    i++;

    if (tamanho == i)
    {
      int *vetor2 = new int[i + 2];

      copy(vetor, vetor + tamanho, vetor2);

      delete[] vetor;
      vetor = vetor2;
    }
  }

  // delentando o ultimo item
  i--;

  if (i % 2 == 0)
  {
    cout << (vetor[i / 2] + vetor[(i / 2) - 1]) / 2.0;
  }
  else
  {
    cout << vetor[i / 2] / 2.0;
  }

  cout << endl;

  return 0;
}