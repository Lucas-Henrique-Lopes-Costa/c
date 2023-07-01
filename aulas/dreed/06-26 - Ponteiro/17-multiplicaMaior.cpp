/*
Faça um programa que crie uma matriz de números reais. Leia os valores da matriz e depois multiplique todos elementos de cada linha pelo maior elemento em módulo da linha. Escreva o resultado.

O módulo (ou valor absoluto) de um número é o mesmo sem sinal.

Não é permitido criar qualquer vetor ou matriz sem usar alocação dinâmica.

Entradas:
Número de linhas da matriz e número de colunas da matriz.
Elementos da matriz (números reais).

Saídas:
Matriz após as operações.

Exemplo de entrada:
3 3
1.8  9  18
-50 10   5
-4 -8 -16

Exemplo de saída:
32.4  162  324
-2500  500  250
-64 -128 -256
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  double **matriz = new double *[n];

  for (int i = 0; i < n; i++)
  {
    matriz[i] = new double[m];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    double maior = matriz[i][0];
    for (int j = 0; j < m; ++j)
    {
      if (abs(matriz[i][j]) > maior)
        maior = abs(matriz[i][j]);
    }

    for (int j = 0; j < m; ++j)
    {
      matriz[i][j] *= maior;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; ++j)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    delete[] matriz[i];
  }

  delete[] matriz;

  return 0;
}
