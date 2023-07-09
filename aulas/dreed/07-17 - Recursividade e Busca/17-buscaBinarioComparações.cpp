/*
Faça um programa que lê diversos números inteiros, ordenados, e depois realiza uma busca binária nesse vetor. O programa deve contar quantas comparações foram realizadas durante a busca.

A busca binária deve ser feita em um subprograma.

Entradas:
Quantidade de números a serem armazenados no vetor.
Vários números inteiros, em ordem crescente, para armazenar no vetor.
Número inteiro a ser buscado no vetor.

Saídas:
O índice do elemento procurado no vetor. Caso o valor não seja encontrado deve ser impresso -1.
O número de comparações realizadas entre elementos do vetor e o elemento procurado que foram necessárias para encontrar o valor.

Exemplo de entrada:
5
1 2 3 4 5
3

Exemplo de saída:
2
1
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

  int inicio = 0;
  int fim = tamanhoVetor - 1;

  int index, contComparacoes = 0, contComparacoesSeguencial = 0;
  buscaBinaria(vetor, numeroProcurado, inicio, fim, index, contComparacoes);
  
  bool encotrou = false;
  while (!encotrou && tamanhoVetor > contComparacoesSeguencial)
  {
    if (numeroProcurado == vetor[contComparacoesSeguencial])
    {
      encotrou = true;
    }
    contComparacoesSeguencial++;
  }

  cout << index << endl;

  cout << contComparacoes << endl;

  return 0;
}