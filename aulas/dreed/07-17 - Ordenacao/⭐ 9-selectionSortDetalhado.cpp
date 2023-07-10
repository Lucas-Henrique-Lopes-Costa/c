/*
Como forma de facilitar o ensino dos métodos de ordenação, um professor resolveu fazer um programa que mostrasse o funcionamento do Selection Sort passo a passo. A ideia é que a cada comparação realizada pelo método, o vetor seja impresso destacando-se os elementos que estão sendo comparados e, quando ocorre uma troca, o vetor é exibido novamente mostrando os elementos que serão trocados. Para isso será necessário criar um programa que tenha:

Um subprograma que exibe um vetor de inteiros com os elementos separados por tabulações. Além disso, ele deve receber por parâmetro as posições de dois elementos e um booleano indicando se eles serão trocados ou não. Se eles serão trocados deve ser impresso " t" logo após os dois elementos, caso contrário, deve ser impresso " *".
Um subprograma com a implementação do Selection Sort (para vetor de inteiros), que utilize adequadamente o subprograma anterior. Obs: as chamadas devem ser feitas antes dos elementos serem trocados, mas já indicando se serão trocados ou não.
No subprograma principal deve ser pedido ao usuário a quantidade de elementos e os elementos do vetor.
Não deve haver nenhuma operação de escrita fora do subprograma de exibição do vetor.
Dica: faça primeiro o exercício similar do Bubble Sort. Depois, implemente o Selection Sort e reutilize o subprograma de exibição feito no exercício anterior.

Entradas:
Quantidade de números do vetor.
Os números do vetor a ser ordenado.

Saídas:
Os passos de ordenação do Selection Sort conforme o enunciado.
Uma última exibição do vetor sem destacar elementos (mas ainda assim usando o mesmo subprograma).

Exemplo de Entrada:
6
4 8 2 9 5 0 

Exemplo de Saída:
4 *	8 *	2	9	5	0	
4 *	8	2 *	9	5	0	
4	8	2 *	9 *	5	0	
4	8	2 *	9	5 *	0	
4	8	2 *	9	5	0 *	
4 t	8	2	9	5	0 t	
0	8 *	2 *	9	5	4	
0	8	2 *	9 *	5	4	
0	8	2 *	9	5 *	4	
0	8	2 *	9	5	4 *	
0	8 t	2 t	9	5	4	
0	2	8 *	9 *	5	4	
0	2	8 *	9	5 *	4	
0	2	8	9	5 *	4 *	
0	2	8 t	9	5	4 t	
0	2	4	9 *	5 *	8	
0	2	4	9	5 *	8 *	
0	2	4	9 t	5 t	8	
0	2	4	5	9 *	8 *	
0	2	4	5	9 t	8 t	
0	2	4	5	8	9	
*/
#include <iostream>
using namespace std;

void selectionSort(float vetor[], int n)
{
  int i, j, min;
  for (i = 0; i < n - 1; i++)
  {
    min = i;

    for (j = i + 1; j < n; j++)
    {
      exibeVetor(vetor, n, min, j, false);

      if (vetor[j] < vetor[min])
      {
        min = j;
      }
    }
    if (i != min) // se i for diferente de min, então houve troca
    {
      exibeVetor(vetor, n, i, min, true);
      int aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }

  exibeVetor(vetor, n, -1, -1, false);
}

int main()
{
  int n;
  cin >> n;

  float vetor[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  selectionSort(vetor, n);

  return 0;
}