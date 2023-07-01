/*
Faça um programa que armazene, em um vetor alocado dinamicamente, um conjunto N de números inteiros. Em seguida, identifique e remova os números ímpares que sejam múltiplos de 3. O vetor deve ser redimensionado de modo a armazenar todos os números pares e apenas os ímpares não múltiplos de 3. Ao final, deve ser impresso na saída padrão o tamanho e os elementos do vetor resultante.

Entradas:
Quantidade N de números inteiros.
Números armazenados.

Saídas:
Tamanho do vetor resultante.
Elementos do vetor resultante.

Exemplo de Entrada:
10
1 2 3 4 5 6 7 8 9 10

Exemplo de Saída:
8
1 2 4 5 6 7 8 10
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int *vetor = new int[n];

  for (int i = 0; i < n; i++)
  {
    int numero;
    cin >> numero;

    if (numero % 2 == 0 || numero % 3 != 0)
    {
      vetor[i] = numero;
    }
    else
    {
      int *aux = new int[n - 1];
      copy(vetor, vetor + i, aux);

      delete[] vetor;
      vetor = aux;

      i--;
      n--;
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
