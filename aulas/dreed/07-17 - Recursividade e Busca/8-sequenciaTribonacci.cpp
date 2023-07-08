/*
A Sequência de Tribonacci é uma das várias generalizações da clássica sequência de Fibonacci. Sua formulação é dada por:

T(n) = T(n − 1) + T(n − 2) + T(n − 3) para n ≥ 3, com T(0) = T(1) = 0 e T(2) = 1.

Implemente um programa que utiliza uma função recursiva para calcular o n-ésimo termo da Sequência de Tribonacci.

Entrada:
um número natural n

Saída:
n-ésimo termo da Sequência de Tribonacci

Exemplo de Entrada:
10

Exemplo de Saída:
81

Exemplo de Entrada:
20

Exemplo de Saída:
35890
*/
#include <iostream>
using namespace std;

void tribonacci(int n, int i1, int i2, int i3)
{
  if (n == 0)
  {
    cout << i1;
  }
  else if (n == 1)
  {
    cout << i2;
  }
  else if (n == 2)
  {
    cout << i3;
  }
  else
  {
    int i4 = i1 + i2 + i3;
    i1 = i2;
    i2 = i3;
    i3 = i4;
    tribonacci(n - 1, i1, i2, i3);
  }
}

int main()
{
  int n;
  cin >> n;

  int i1 = 0, i2 = 0, i3 = 1;

  tribonacci(n, i1, i2, i3);

  cout << endl;

  return 0;
}