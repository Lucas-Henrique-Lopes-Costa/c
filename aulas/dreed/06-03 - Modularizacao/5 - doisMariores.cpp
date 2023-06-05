#include <iostream>
using namespace std;

void Max2(float numeros[], int tamanho, float &A, float &B)
{
  for (int i = 2; i < tamanho; i++)
  {
    if (numeros[i] > A)
    {
      B = A;
      A = numeros[i];
    }
    else if (numeros[i] > B)
    {
      B = numeros[i];
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

  if (n == 0)
  {
    cout << "0 0" << endl;
    return 0;
  }

  float numeros[n];
  for (int i = 0; i < n; i++)
  {
    cin >> numeros[i];
  }

  float A;
  float B;

  if (numeros[0] > numeros[1])
  {
    A = numeros[0];
    B = numeros[1];
  }
  else
  {
    A = numeros[1];
    B = numeros[0];
  }

  Max2(numeros, n, A, B);
  cout << A << " " << B << endl;

  return 0;
}
