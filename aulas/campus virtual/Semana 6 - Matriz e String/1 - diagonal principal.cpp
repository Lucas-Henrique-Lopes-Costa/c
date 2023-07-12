#include <iostream>
using namespace std;

int main()
{
  int K, L = 3, C = 3; // L: qtd linhas, C: qtd colunas

  float M[3][3]; // declara a matriz M com 3 linhas e 3 colunas
  
  // le os dados da matriz
  for (int i = 0; i < L; i++)
    for (int j = 0; j < C; j++)
      cin >> M[i][j];
  
  cin >> K; // pega o valor que vai ser multiplicado a diagonal principal
  
  for (int i = 0; i < L; i++)
    cout << M[i][i] << " * " << K << " = " << M[i][i] * K << endl;
    
  return 0;
}
