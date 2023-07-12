#include <iostream>

using namespace std;

int main()
{
  int matriz[2][2] = {{3, 4}, {5, 6}};

  // Imprimindo os elementos da matriz pelas colunas
  for (int j = 0; j < 2; j++)
  {
    for (int i = 0; i < 2; i++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}