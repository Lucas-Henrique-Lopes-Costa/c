#include <iostream>
using namespace std;

void selection(int vetor[], int tam)
{
  int menor;
  for (int i = 0; i < tam; i++)
  {
    menor = i;
    for (int j = i + 1; j < tam; j++)
    {
      if (vetor[j] < vetor[menor])
      {
        menor = j;
      }
    }

    int aux = vetor[i];
    vetor[i] = vetor[menor];
    vetor[menor] = aux;

    swap(vetor[i], vetor[menor]);
  }

}

int main()
{
  int tamanho = 5;
  int *vetor = new int[tamanho];

  int numero;
  cin >> numero;

  int index = 0;
  while (numero > 0)
  {
    vetor[index] = numero;

    index++;

    if (index == tamanho)
    {
      int *novoVetor = new int[tamanho + 5];

      for (int i = 0; i < tamanho; i++)
        novoVetor[i] = vetor[i];

      delete[] vetor;

      vetor = novoVetor;

      tamanho += 5;
    }

    cin >> numero;
  }

  selection(vetor, index);

  for (int i = 0; i < index; i++)
    cout << vetor[i] << " ";

  cout << endl;

  return 0;
}