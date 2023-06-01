#include <iostream>

using namespace std;

int main()
{
  int rows, columns;
  cout << "Informe o numero de linhas: ";
  cin >> rows;
  cout << "Informe o numero de colunas: ";
  cin >> columns;

  // Alocação dinâmica da matriz
  int matrix[rows][columns];

  // Preenchimento da matriz com dados da entrada padrão
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << "Informe o elemento [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  // Impressão da matriz
  cout << "Matriz informada:" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}