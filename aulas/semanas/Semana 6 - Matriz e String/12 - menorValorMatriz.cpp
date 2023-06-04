#include <iostream>

using namespace std;

int main()
{
  int matriz[3][3] = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
  int menor = matriz[0][0];
  int linhaMenor = 0;

  // Encontrando o menor elemento da matriz e a linha correspondente
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (matriz[i][j] < menor)
      {
        menor = matriz[i][j];
        linhaMenor = i;
      }
    }
  }

  cout << "Linha do menor elemento da matriz: " << linhaMenor << endl;

  return 0;
}