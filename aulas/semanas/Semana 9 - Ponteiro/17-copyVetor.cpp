#include <iostream>
#include <cstring> // memcpy
using namespace std;

int main()
{
  int vetor1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
  int vetor2[10];

  memcpy(vetor2, vetor1, sizeof(int) * 10);
  // memcpy(destino, origem, tamanho)
  // sizeof(int) * 10 = 4 * 10 = 40 bytes

  cout << "Apos copia 1: ";
  for (int i = 0; i < 10; i++)
    cout << vetor2[i] << " ";
  cout << endl;

  memcpy(vetor2, &vetor1[10], sizeof(int) * 10);
  // começando a copiar a partir do 11 elemento (posição 10)

  cout << "Apos copia 2: ";
  for (int i = 0; i < 10; i++)
    cout << vetor2[i] << " ";
  cout << endl;
  
  return 0;
}
