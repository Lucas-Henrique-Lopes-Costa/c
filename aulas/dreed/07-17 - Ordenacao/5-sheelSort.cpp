/*
Shell Sort é uma generalização, e melhoria, do algoritmo de ordenação Insertion Sort, utilizando a ideia de um salto (gap) entre os elementos. Assim, começando com lacunas maiores, vai-se diminuindo o tamanho do gap, até permitir a comparação dos elementos um a um. O algoritmo pode ser expresso por 3 estruturas de repetição:

Estrutura de repetição para definir o tamanho da lacuna (gap)
Estrutura de repetição para pegar um dos valores do conjunto não ordenado como sendo o pivô para achar sua posição correta.
Estrutura de repetição para comparar o pivô com os elementos localizados à sua esquerda no arranjo (respeitando-se a lacuna). Enquanto o subconjunto dos elementos à sua esquerda não acabar e eles forem maiores do que o pivô, move-se os maiores valores para a direita.
Faça uma implementação do Shell Sort.

Entradas:
Tamanho do vetor a ser ordenado
Sequência (vetor) de valores desordenados
Tamanho do vetor com as lacunas (gaps)
Sequência (vetor) de números representando o tamanho das lacunas (gaps) em ordem crescente.

Saídas:
Elementos do vetor ordenados.

Exemplo de Entrada:
9 
3 4 9 2 5 1 8 0 11
9 
1  4  10 23  57 132 301 701 1750

Exemplo de Saída:
0 1 2 3 4 5 8 9 11
*/
#include <iostream>
#include <fstream>
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

  int vetor[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  int gap;
  cin >> gap;

  int gaps[gap];
  for (int i = 0; i < gap; i++)
  {
    cin >> gaps[i];
  }
  
  sheelSort(n, vetor, gap, gaps);

  for (int i = 0; i < n; i++)
  {
    cout << vetor[i] << " ";
  }
  

  return 0;
}
