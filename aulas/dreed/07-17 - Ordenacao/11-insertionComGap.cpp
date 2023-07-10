/*
O insertion sort é um método considerado relativamente eficiente para vetores pequenos, por ser um método adaptativo. Essa característica foi, inclusive, explorada para a criação do Shell sort. O Shell sort efetua várias passadas do insertion sort, mas em saltos (gaps), começando com saltos maiores e diminuindo-os.
O seu objetivo é justamente fazer uma das etapas do Shell sort: implementar o insertion sort, mas com comparação feita em saltos. O algoritmo recebe um vetor de um dado tamanho, bem como o valor do salto (gap) a ser utilizado e efetua as seguintes ações:

Para i, variando de um em um, iniciando no valor do salto (gap), execute os seguintes passos enquanto i for menor que o tamanho do vetor:
Inicializa variável auxiliar com o valor do vetor na posição i.
Inicializa variável j com o valor do próprio i.
Enquanto j for maior ou igual ao salto e auxiliar for menor que o valor do vetor na posição dada por j menos o valor do salto, execute as seguintes ações:
Atribua ao vetor na posição j o valor do vetor na posição dada por j menos o valor do salto.
Faça com que j receba o valor de j menos o valor do salto.
Atribua ao vetor na posição j o valor da variável auxiliar.
Obs: se chamado com salto de tamanho um, o método irá ordenar o vetor usando o insertion sort normal

.
Entradas:

Tamanho do vetor (um inteiro)
Elementos do vetor (valores inteiros)
Valor do salto (um inteiro)
Saídas:

Vetor, após execução do algoritmo de inserção com saltos.
Exemplo de Entrada:

10
10 9 8 7 6 5 4 3 2 1
3
Exemplo de Saída:

1 3 2 4 6 5 7 9 8 10
Exemplo de Entrada:

20
9 2 3 1 3 5 1 8 7 0 -1 2 -4 -5 -6 7 8 11 13 12
2
Exemplo de Saída:

-6 -5 -4 0 -1 1 1 2 3 2 3 5 7 7 8 8 9 11 13 12
Exemplo de Entrada:

20
10 9 8 7 6 5 4 3 2 1 0 11 12 13 14 15 16 18 19 -4
4
Exemplo de Saída:

2 1 0 -4 6 5 4 3 10 9 8 7 12 13 14 11 16 18 19 15
Exemplo de Entrada:

25
10 9 -1  8 7 6 5 4 -2 3 2 1 -3 0 11 12 -5 13 -6 14 15 16 18 19 -4
1
Exemplo de Saída:

-6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 18 19
*/

#include <iostream>
using namespace std;

void sheelSort(int n, int vetor[], int gap, int gaps[])
{
  int posicaoGap = gap;
  while (gaps[posicaoGap] > n)
  {
    posicaoGap--;
  }

  int aux;
  int j;
  while (posicaoGap >= 0)
  {
    int gap = gaps[posicaoGap];

    for (int i = gap; i < n; i++)
    {
      aux = vetor[i];
      j = i;

      while ((j >= gap) && (aux < vetor[j - gap]))
      {
        vetor[j] = vetor[j - gap];
        j = j - gap;
      }
      vetor[j] = aux;
    }

    posicaoGap--;
  }
}

int main()
{
  int n;
  cin >> n;

  

  return 0;
}