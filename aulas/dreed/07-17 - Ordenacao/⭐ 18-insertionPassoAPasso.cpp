/*
Implemente o algoritmo de ordenação insertion sort de tal forma que os elementos são inseridos do lado direito do vetor, em ordem decrescente.

A cada inserção realizada, o estado do vetor deverá ser escrito, facilitando assim a análise da execução do algoritmo.

Dica: o algoritmo insertion sort, em sua variação original, que insere os elementos no lado esquerdo do vetor em ordem crescente, em descrição narrativa, é assim:

Para cada índice i do vetor, variando do segundo até o último:
   1. Atribuir ao valor auxiliar, o item da posição i.
   2. Atribuir ao índice j, o antecessor do índice i.
   3. Enquanto j for um índice válido e o item na posição j for
        maior que o valor auxiliar:
      3.1. Atribuir ao item da posição que sucede j o item da posição j.
      3.2. Decrementar j.
   4. Atribuir ao item da posição que sucede j, o valor auxiliar.

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

int main()
{
  int n;
  cin >> n;
  int *vet;
  vet = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vet[i];
  }

  for (int i = n - 2; i >= 0; i--)
  {
    int aux = vet[i];
    int j = i + 1;
    while (j < n and vet[j] > aux)
    {
      vet[j - 1] = vet[j];
      j++;
    }
    vet[j - 1] = aux;

    for (int k = 0; k < n; k++)
    {
      cout << vet[k] << " ";
    }
    cout << endl;
  }

  delete[] vet;

  return 0;
}
