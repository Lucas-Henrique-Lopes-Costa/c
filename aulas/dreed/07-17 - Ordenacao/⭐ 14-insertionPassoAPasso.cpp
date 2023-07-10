/*
Implemente o algoritmo de ordenação insertion sort de tal forma que os elementos são inseridos do lado direito do vetor, em ordem decrescente, conforme algoritmo abaixo:

1. Para cada índice i do vetor, variando do penúltimo até o primeiro:
   1.1. Atribuir ao valor auxiliar, o item da posição i.
   1.2. Atribuir ao índice j, o sucessor do índice i.
   1.3. Enquanto j for um índice válido e o item na posição j for
        maior que o valor auxiliar:
      1.3.1. Atribuir ao item da posição que antecede j, o item da posição j.
      1.3.2. Incrementar j.
   1.4. Atribuir ao item da posição que antecede j, o valor auxiliar.
A cada inserção realizada, o estado do vetor deverá ser escrito, facilitando assim a análise da execução do algoritmo.

Entradas:
Tamanho do vetor que será ordenado.
Os diversos valores para ordenação (números inteiros).

Saídas:
Cada passo da ordenação. Ou seja, os valores do vetor a cada inserção feita.

Exemplo de entradas:
6
4 7 2 3 5 6

Exemplo de saídas:
4 7 2 3 6 5
4 7 2 6 5 3
4 7 6 5 3 2
4 7 6 5 3 2
7 6 5 4 3 2
*/
#include <iostream>
using namespace std;

void insertionSort(int n, int vetor[])
{
  int j, aux;
  for (int i = n - 2; i >= 0; i--)
  {
    aux = vetor[i];
    j = i + 1;
    while ((j < n) && (aux < vetor[j]))
    {
      vetor[j - 1] = vetor[j];
      j++;
    }

    vetor[j - 1] = aux;

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