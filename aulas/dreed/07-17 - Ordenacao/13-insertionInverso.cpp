/*
Implemente uma variação do algoritmo Insertion Sort de modo que os elementos do vetor sejam ordenados em ordem decrescente. Assim, a cada passo deve-se comparar se o elemento em uma determinada posição i é maior que os elementos posicionados entre i-1 e 0.

Entradas:

Tamanho do vetor que será ordenado.
Elementos do vetor que serão ordenados (inteiros).
Saídas:

Os elementos do vetor a cada troca de valor.
Exemplo de Entrada:

5
1 2 3 4 5
Exemplo de Saída:

2 1 3 4 5 
3 2 1 4 5 
4 3 2 1 5 
5 4 3 2 1
*/
#include <iostream>
using namespace std;

void insertionSort(int n, int vetor[])
{
  int i, j;
  int aux;
  for (i = 1; i < n; i++)
  {
    aux = vetor[i];
    j = i - 1;
    while ((j >= 0) && (aux > vetor[j]))
    {
      vetor[j + 1] = vetor[j];
      j--;
    }
    vetor[j + 1] = aux;

    for (int k = 0; k < n; k++)
    {
      cout << vetor[k] << " ";
    }

    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  int vetor[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  insertionSort(n, vetor);

  return 0;
}