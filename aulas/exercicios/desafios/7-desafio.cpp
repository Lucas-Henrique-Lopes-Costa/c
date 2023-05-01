#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  system("clear||cls");

  int linha, coluna;
  cout << "Quantas linhas: ";
  cin >> linha;

  cout << "Quantas colunas: ";
  cin >> coluna;

  float matrizA[linha][coluna], matrizB[linha][coluna];

  cout << "#-#-# Digite os elementos da Matriz 1 #-#-#" << endl;

  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      cout << "Digite o elemento da linha " << i + 1 << " coluna " << j + 1 << ": ";
      cin >> matrizA[i][j];
    }
  }

  cout << "#-#-# Digite os elementos da Matriz 2 #-#-#" << endl;

  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      cout << "Digite o elemento da linha " << i + 1 << " coluna" << j + 1 << ": ";
      cin >> matrizB[i][j];
    }
  }

  float matrizSoma[linha][coluna];
  system("clear||cls");

  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }

  cout << "O resultado da soma entre as Matrizes 1:" << endl;

  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      cout << matrizA[i][j] << " ";
    }
    cout << endl;
  }

  cout << "O resultado da soma entre as Matrizes 2:" << endl;

  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      cout << matrizB[i][j] << " ";
    }
    cout << endl;
  }
  
  cout << endl;

  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      cout << matrizSoma[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
