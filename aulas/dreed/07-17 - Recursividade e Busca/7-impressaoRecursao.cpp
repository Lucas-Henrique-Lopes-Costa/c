/*
Crie um subprograma recursivo que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem crescente.

Entradas:
Um número inteiro

Saídas:
Uma sequência de números naturais de 0 até N

Exemplo de Entradas:
15

Exemplo de Saída:
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
*/
#include <iostream>
using namespace std;

void imprime(int n)
{
  if (n == 0)
  {
    cout << n << " ";
    return;
  }

  imprime(n - 1);
  cout << n << " ";
}

int main()
{
  int n;
  cin >> n;

  imprime(n);

  cout << endl;

  return 0;
}