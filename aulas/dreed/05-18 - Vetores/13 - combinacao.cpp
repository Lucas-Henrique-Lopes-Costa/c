#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que preencha dois vetores com cinco elementos numéricos cada, que serão inseridos ordenados de maneira crescente pelo usuário. Deverá ser gerado um terceiro vetor com dez posições, composto pela junção dos elementos dos vetores anteriores, também ordenado de maneira crescente.

    Entradas:

    - Dois vetores ordenados de 5 elementos
    Saídas:

    - Vetor resultante com 10 números ordenados
    Entradas:
    1 3 5 7 9
    2 4 6 8 10
    Saídas:
    1 2 3 4 5 6 7 8 9 10
  */

  int tamanhoA = 5, tamanhoB = 5, tamanhoC;

  // Lendo o vetor A
  int vetorA[tamanhoA];
  for (int i = 0; i < tamanhoA; i++)
  {
    cin >> vetorA[i];
  }

  // Ler o vetor B
  int vetorB[tamanhoB];
  for (int i = 0; i < tamanhoB; i++)
  {
    cin >> vetorB[i];
  }

  // Tamanho máximo do vetor C
  tamanhoC = tamanhoA + tamanhoB;
  int vetorC[tamanhoC];

  // Inicializando o vetor C com os valores do vetor A
  for (int i = 0; i < tamanhoA; i++)
  {
    vetorC[i] = vetorA[i];
  }

  // Inicializando o vetor C com os valores do vetor B
  for (int i = 0; i < tamanhoB; i++)
  {
    vetorC[tamanhoA + i] = vetorB[i];
  }

  // ordernando o vetor C
  for (int i = 0; i < tamanhoC; i++)
  {
    for (int j = i + 1; j < tamanhoC; j++)
    {
      if (vetorC[i] > vetorC[j])
      {
        int aux = vetorC[i];
        vetorC[i] = vetorC[j];
        vetorC[j] = aux;
      }
    }
  }

  // imprimindo o vetor C
  for (int i = 0; i < tamanhoC; i++)
  {
    cout << vetorC[i] << " ";
  }

  cout << endl;

  return 0;
}