/*
Faça um programa que receba a quantidade de números que o usuário digitará e em seguida preencha um vetor com os números inteiros, calcule e mostre: os números múltiplos de 2; os números múltiplos de 3; e os números múltiplos de 2 e 3. Os números múltiplos de 2 e 3 podem aparecer nos casos isolados. Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.

Observação: o vetor deverá ser alocado dinamicamente

Entradas:
Quantidade de números a serem inseridos pelo usuário/li>
Sequência de números inteiros

Saídas:
Números que são múltiplos de 2;
Números que são múltiplos de 3;
Números que são múltiplos de 2 e 3 simultaneamente.

Exemplo de entrada:
7
4 6 3 9 7 10 13

Exemplo de saída:
4 6 10
6 3 9
6
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int *numeros = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> numeros[i];
  }

  int j2 = 0;
  int *numeros2 = new int[j2];
  for (int i = 0; i < n; i++)
  {
    if (numeros[i] % 2 == 0)
    {
      // Redimensionando o vetor
      int *temp = new int[j2 + 1];
      memcpy(temp, numeros2, j2 * sizeof(int));

      delete[] numeros2;
      numeros2 = temp;

      numeros2[j2] = numeros[i];

      j2++;
    }
  }

  if (j2 == 0)
  {
    cout << 0;
  }
  else
  {
    for (int i = 0; i < j2; i++)
    {
      cout << numeros2[i] << " ";
    }
  }

  cout << endl;

  int j3 = 0;
  int *numeros3 = new int[j3];
  for (int i = 0; i < n; i++)
  {
    if (numeros[i] % 3 == 0)
    {
      // Redimensionando o vetor
      int *temp = new int[j3 + 1];
      memcpy(temp, numeros3, j3 * sizeof(int));

      delete[] numeros3;
      numeros3 = temp;

      numeros3[j3] = numeros[i];

      j3++;
    }
  }

  if (j3 == 0)
  {
    cout << 0;
  }
  else
  {
    for (int i = 0; i < j3; i++)
    {
      cout << numeros3[i] << " ";
    }
  }

  cout << endl;

  int j23 = 0;
  int *numeros23 = new int[j23];
  for (int i = 0; i < n; i++)
  {
    if (numeros[i] % 2 == 0 and numeros[i] % 3 == 0)
    {
      // Redimensionando o vetor
      int *temp = new int[j23 + 1];
      memcpy(temp, numeros23, j23 * sizeof(int));

      delete[] numeros23;
      numeros23 = temp;

      numeros23[j23] = numeros[i];

      j23++;
    }
  }

  if (j23 == 0)
  {
    cout << 0;
  }
  else
  {
    for (int i = 0; i < j23; i++)
    {
      cout << numeros23[i] << " ";
    }
  }

  cout << endl;

  return 0;
}