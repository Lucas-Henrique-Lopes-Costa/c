/*
Frequentemente é necessário realizar consultas em um vetor para buscar um determinado elemento. Dado um vetor com elementos ordenados, elaborar um programa para realizar essa busca. Utilizar para isso: busca sequencial e binária.

Entradas:
A quantidade de números que devem ser lidos,
vários números (inteiros, em ordem crescente, pode haver repetição de números),
um número a ser procurado.

Saídas:
A posição do número procurado no vetor,
o número de comparações necessárias na busca sequencial,
o número de comparações necessárias na busca binária.
O programa deve indicar que não encontrou o elemento procurado usando -1 como posição do elemento.

Exemplo de entrada:
10
0 1 2 3 4 5 6 7 8 9
9

Exemplo de saída:
9
10
4
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

  cout << contComparacoesSeguencial << endl;

  cout << contComparacoes << endl;

  return 0;
}