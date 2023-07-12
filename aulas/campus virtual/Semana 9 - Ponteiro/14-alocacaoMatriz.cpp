#include <iostream>
using namespace std;

int main()
{
  int m, n;
  int **matriz;

  cin >> m >> n;

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

  // imprimindo a matriz
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; ++j)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }


  for (int i = 0; i < m; i++)
  {
    // aqui se desalocam as colunas de cada linha
    delete[] matriz[i];
  }
  delete[] matriz; // aqui se desalocam as linhas
}
