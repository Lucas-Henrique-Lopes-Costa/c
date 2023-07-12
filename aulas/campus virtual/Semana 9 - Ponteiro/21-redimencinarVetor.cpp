#include <iostream>
using namespace std;

int main()
{
  int *ptrVetor;
  ptrVetor = new int[100]; // Aloca um vetor de 100 posições

  // Redimensionando o vetor
  int *temp = new int[150]; // Vetor temporário
  for (int i = 0; i < 100; i++)
    temp[i] = ptrVetor[i]; // Copia os elementos do vetor original para o temporário
  
  delete[] ptrVetor; // Libera o vetor original

  ptrVetor = temp; // Atribui o endereço do vetor temporário para o vetor original
}