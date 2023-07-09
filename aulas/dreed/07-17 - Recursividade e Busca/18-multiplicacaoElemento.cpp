/*
Dado um número N, um vetor V de N números inteiros ordenados, um valor de busca inteiro B, e um valor de multiplicação inteiro M, faça um programa que multiplique o valor de B no vetor V pelo valor de M. Para encontrar o valor B no vetor, a busca binária deve ser utilizada. Caso o valor de busca não exista no vetor, o vetor original deve ser impresso.

Entradas:
Valor inteiro N,
N valores inteiros ordenados que devem ser armazenados em um vetor;
Valor de busca B;
Valor de multiplicação M.

Saídas:
Vetor após a multiplicação.

Exemplo de Entrada:
6
1 2 3 4 5 6
5
2

Exemplo de Saída:
1 2 3 4 10 6

Exemplo de Entrada:
5
1 2 3 4 5 
6
3

Exemplo de Saída:
1 2 3 4 5
*/
#include <iostream>
using namespace std;

int buscaBinaria(int vetor[], int numeroProcurado, int inicio, int fim, int &index, int &contComparacoes)
{
  if (inicio <= fim)
  {
    index = (inicio + fim) / 2;
    contComparacoes++;

    if (vetor[index] == numeroProcurado)
    {
      return index;
    }
    else if (vetor[index] < numeroProcurado)
    {
      inicio = index + 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index, contComparacoes);
    }
    else
    {
      fim = index - 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index, contComparacoes);
    }
  }
  else
  {
    index = -1;
    return index;
  }

  return 0;
}

int main()
{
  int tamanhoVetor;
  cin >> tamanhoVetor;

  int vetor[tamanhoVetor];
  for (int i = 0; i < tamanhoVetor; i++)
  {
    cin >> vetor[i];
  }

  int numeroProcurado;
  cin >> numeroProcurado;

  int mult;
  cin >> mult;

  int inicio = 0;
  int fim = tamanhoVetor - 1;

  int index, contComparacoes = 0;
  buscaBinaria(vetor, numeroProcurado, inicio, fim, index, contComparacoes);

  if (index >= 0)
  {
    vetor[index] *= mult;
  }

  for (int i = 0; i < tamanhoVetor; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}