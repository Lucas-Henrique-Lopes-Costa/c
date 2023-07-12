#include <iostream>

using namespace std;

int main()
{
  int matriz[3][4];

  // Preenchendo a matriz com dados lidos da entrada padrão
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> matriz[i][j];
    }
  }

  // Imprimindo os dados da matriz
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}