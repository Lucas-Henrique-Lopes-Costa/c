#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
  int *ptrVetor;
  ptrVetor = new int[100]; // Aloca um vetor de 100 posições

  // Redimensionando o vetor
  int *temp = new int[150]; // Vetor temporário
  // Copia os elementos do vetor original para o temporário
  memcpy(temp, ptrVetor, 100 * sizeof(int));
  // para onde vai, de onde vem, quantos vamos copiar de onde vem

  // ou
  copy(ptrVetor, ptrVetor + 100, temp);
  // onde começa, onde termina, para onde vai

  delete[] ptrVetor; // Libera o vetor original

  ptrVetor = temp; // Atribui o endereço do vetor temporário para o vetor original
}