#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int matriz[5][5], i, j;
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      cin >> matriz[i][j];
    }
  }

  int resultado1, resultado2;
  resultado1 = resultado2 = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 5 - 1; j >= 0; j--)
    {
      resultado1 += matriz[i][i];
      if (i + j == 5 - 1)
        resultado2 += matriz[i][j];
    }
  }
  cout << resultado1 << " " << resultado2;

  return 0;
}