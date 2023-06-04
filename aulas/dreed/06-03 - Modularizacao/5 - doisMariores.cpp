#include <iostream>
using namespace std;

void Max2(int numeros[], int tamanho, int &maiorA, int &maiorB)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (numeros[i] > maiorA)
    {
      maiorB = maiorA;
      maiorA = numeros[i];
    }
    else if (maiorB < numeros[i])
    {
      maiorB = numeros[i];
    }
  }
}

int main()
{
  /*
    Escreva um subprograma chamado Max2. Esse subprograma deve receber um vetor de números reais, um inteiro contendo o tamanho do vetor e mais dois parâmetros reais A e B, passados por referência. Max2 não retorna valor (é uma “função void”). Este subprograma deve encontrar os dois maiores elementos do vetor e colocar o maior deles em A e o segundo maior em B.

    A função principal deve passar o vetor e seu tamanho, receber os dois maiores e escrevê-los. O tamanho do vetor deve ser lido no início do programa.

    Entradas:
    O tamanho N do vetor;
    Os N elementos do vetor, tipo real.

    Saídas:
    O maior elemento (A).
    O segundo maior elemento (B).

    Exemplo de entrada:
    18
    3 0 1 2 17 5 6 7 8 9 10 11 15 16 12 13 14 4

    Exemplo de saída:
    17 16
  */

  int n;
  cin >> n;

  int numeros[n];
  for (int i = 0; i < n; i++)
  {
    cin >> numeros[i];
  }

  int maiorA = numeros[0];
  int maiorB = numeros[1];

  if (maiorA < maiorB)
  {
    maiorA = maiorB;
    maiorB = maiorA;
  }

  Max2(numeros, n, maiorA, maiorB);
  cout << maiorA << " " << maiorB << endl;

  return 0;
}
