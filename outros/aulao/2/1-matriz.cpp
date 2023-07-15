#include <iostream>
using namespace std;

int main()
{
  int m, n;
  int **matriz;

  cin >> m >> n;

  matriz = new int *[m];
  for (int i = 0; i < m; i++)
  {
    matriz[i] = new int[n];
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; ++j)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}
