/*
Faça um programa que lê um vetor de números inteiros e depois escreve todos os números entre dois marcadores de limite na ordem inversa. Os limites não farão parte da saída.

Os marcadores não precisam estar em ordem, ou seja, o primeiro marcador não necessariamente precisa vir antes do segundo. Observe os exemplos a seguir.

Obs: os vetores devem ser alocados dinamicamente.

Entradas:
Quantidade de elementos do vetor.
Linha contendo os números inteiros do vetor (separados entre si por espaço).
Linha contendo os dois números delimitadores (separados entre si por espaço).

Saídas:
Números do vetor entre os delimitadores, na ordem inversa da leitura.

Exemplo de entrada:
6
9 2 3 4 5 6
2 6

Exemplo de saída:
5 4 3

Exemplo de entrada:
7
8 -1 2 4 5 0 3
5 -1

Exemplo de saída:
4 2
*/
#include <iostream>
using namespace std;

int main()
{
  int n, a, b, i, j;
  cin >> n;

  int *numeros = new int[n];

  for (i = 0; i < n; i++)
    cin >> numeros[i];

  cin >> a >> b;

  if (a > b)
  {
    int aux = a;
    a = b;
    b = aux;
  }

  for (i = 0; i < n; i++)
  {
    bool encontrou = false;
    if (numeros[i] == a and !encontrou)
    {
      for (j = i + 1; j < n; j++)
      {
        bool encontrou = false;
        if (numeros[j] == b and !encontrou)
        {
          for (int k = j - 1; k > i; k--)
            cout << numeros[k] << " ";
          cout << endl;
          encontrou = true;
        }
      }
      encontrou = true;
    }
  }

  return 0;
}