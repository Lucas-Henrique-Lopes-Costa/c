#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int n;
  ifstream arquivo("entrada.txt");

  // Lendo o valor de n do arquivo
  arquivo >> n;

  int matriz[n][n];

  // Preenchendo a matriz com dados do arquivo
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      arquivo >> matriz[i][j];
    }
  }

  arquivo.close();

  // Imprimindo os dados da matriz
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}