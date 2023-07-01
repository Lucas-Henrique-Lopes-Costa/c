/*
Faça um programa que armazene, em um vetor alocado dinamicamente, uma quantidade N de números inteiros. Em seguida, identifique e remova os elementos repetidos. O vetor deve ser redimensionado e passar a armazenar apenas elementos não repetidos. Ao fim, seu programa deve imprimir na saída padrão o tamanho atual do vetor e os elementos armazenados.

Entradas:
Quantidade N de números inteiros
Números armazenados no vetor.

Saídas:
Tamanho atual do vetor.
Elementos atuais do vetor.

Exemplo de Entrada:
10
3 5 12 55 3 78 22 55 34 10

Exemplo de Saída:
8
3 5 12 55 78 22 34 10
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int *vetor = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (vetor[i] == vetor[j])
      {
        for (int k = j; k < n - 1; k++)
        {
          vetor[k] = vetor[k + 1];
        }
        
        int *aux = new int[n - 1];
        memcpy(aux, vetor, (n - 1) * sizeof(int));

        delete[] vetor;
        vetor = aux;

        n--;
        j--;
      }
    }
  }

  cout << n << endl;

  for (int i = 0; i < n; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}
