#include <iostream>
using namespace std;

void ordena(int a[], int tam)
{
  int i, j, aux;

  for (i = 0; i < tam - 1; i++)
  {
    for (j = i + 1; j < tam; j++)
    {
      if (a[i] > a[j])
      {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }
    }
  }

  cout << "Vetor ordenado: ";
  for (i = 0; i < tam; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main()
{
  int m, n;
  cout << "Digite o numero de linhas e colunas: ";
  cin >> m >> n;

  int a[m][n];
  // leitura dos dados
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Digite o elemento " << i << "," << j << ": ";
      cin >> a[i][j];
    }
  }

  int *b;
  b = (int *)a;

  ordena(b, m * n);

  return 0;
}