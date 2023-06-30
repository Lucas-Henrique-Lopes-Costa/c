/*
Escreva uma função que receba como parâmetro uma matriz A 5 x 5 de inteiros. A função deve retornar o ponteiro para um vetor B de tamanho 5 alocado dinamicamente, em que cada posição de B é a soma dos números da coluna correspondente da matriz A.

Entradas:
Os elementos da matriz A

Saídas:
Os elementos do vetor B

Exemplo de Entrada:
1 2 3 4 5
5 4 3 2 1
1 1 1 1 1
2 2 2 2 2
9 8 7 6 5

Exemplo de Saída:
18 17 16 15 14
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
  int m, n;
  int **matriz;

  m = 5;
  n = 5;

  matriz = new int *[m]; // aloca as linhas
  for (int i = 0; i < m; i++)
  {
    matriz[i] = new int[n]; // aloca as colunas de cada linha
  }

  // preenchendo a matriz
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> matriz[i][j];
    }
  }

  int soma = 0;
  for (int i = 0; i < 5; i++)
  {
    soma += matriz[i][0];
  }

  cout << soma << " ";

  soma = 0;
  for (int i = 0; i < 5; i++)
  {
    soma += matriz[i][1];
  }

  cout << soma << " ";

  soma = 0;
  for (int i = 0; i < 5; i++)
  {
    soma += matriz[i][2];
  }

  cout << soma << " ";

  soma = 0;
  for (int i = 0; i < 5; i++)
  {
    soma += matriz[i][3];
  }

  cout << soma << " ";

  soma = 0;
  for (int i = 0; i < 5; i++)
  {
    soma += matriz[i][4];
  }

  cout << soma << endl;

  for (int i = 0; i < m; i++)
  {
    // aqui se desalocam as colunas de cada linha
    delete[] matriz[i];
  }
  delete[] matriz; // aqui se desalocam as linhas

  return 0;
}
