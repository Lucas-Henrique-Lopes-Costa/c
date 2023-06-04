#include <iostream>
using namespace std;

void verificaMaior(int numeros[], int tamanho, int &maior)
{
  for (int i = 0; i < tamanho; i++)
  { 
    if (numeros[i] > maior)
    {
      maior = numeros[i];
    }
  }
}

int main()
{
  /*
    Faça um programa que determina o maior valor de um conjunto de valores.

    O programa deve ter um subprograma que determina o maior elemento de um vetor. O subprograma principal deve ser responsável por realizar todas as operações de leitura e escrita.

    Entradas:
    O número de valores a processar;
    os valores (números inteiros).

    Saídas:
    O maior valor.

    Exemplo de entrada:
    5
    2 7 4 1 3

    Exemplo de saída:
    7
  */

  int n;
  cin >> n;

  int numeros[n];
  for (int i = 0; i < n; i++)
  {
    cin >> numeros[i];
  }

  int maior = numeros[0];
  verificaMaior(numeros, n, maior);
  cout << maior << endl;

  return 0;
}
