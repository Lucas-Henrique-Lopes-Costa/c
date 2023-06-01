#include <iostream>

using namespace std;

void multiplyByTen(int matrix[4][4])
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      matrix[i][j] *= 10;
    }
  }
}

int main()
{
  int matrix[4][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}
    };

  multiplyByTen(matrix);

  // Imprime a matriz multiplicada por 10
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}