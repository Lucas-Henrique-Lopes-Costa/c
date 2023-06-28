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
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int *numeros = new int[n];

  for (int i = 0; i < n; i++)
    cin >> numeros[i];

  int a, b;
  cin >> a >> b;

  int indexInicio;
  bool encontrouInicio = false;

  int i = 0;
  while (encontrouInicio == false)
  {
    if (numeros[i] == a || numeros[i] == b)
    {
      indexInicio = i;
      encontrouInicio = true;
    }
    i++;
  }

  int indexFim;
  bool encontrouFinal = false;

  i = indexInicio + 1;
  while (encontrouFinal == false)
  {
    if (numeros[i] == a || numeros[i] == b)
    {
      indexFim = i;
      encontrouFinal = true;
    }
    i++;
  }

  // redimencionando vetor
  int *vetor = new int[indexFim - indexInicio - 1];

  int j = 0;
  for (int i = indexInicio + 1; i < indexFim; i++)
  {
    vetor[j] = numeros[i];
    j++;
  }

  delete[] numeros;

  // invertendo vetor
  for (int i = 0; i < j / 2; i++)
  {
    int aux = vetor[i];
    vetor[i] = vetor[j - i - 1];
    vetor[j - i - 1] = aux;
  }

  for (int i = 0; i < j; i++)
    cout << vetor[i] << " ";

  cout << endl;

  return 0;
}