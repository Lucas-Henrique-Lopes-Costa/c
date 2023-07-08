/*
Faça um programa que recebe um vetor já ordenado e um número a ser procurado, o programa deverá utilizar uma busca binária recursiva que tem como retorno a posição do elemento procurado ou -1 caso não encontre o elemento.

Entradas:
Tamanho do vetor.
Elementos do vetor já ordenado.
Número a ser procurado.

Saídas:
Posição do elemento no vetor ou -1 caso não seja encontrado.

Exemplo de Entrada:
7
3 7 9 14 17 23 52
52

Exemplo de Saída:
6
*/
#include <iostream>
using namespace std;

void buscaBinaria(int vetor[], int numeroProcurado, int inicio, int fim)
{
  if (inicio <= fim)
  {
    int meio = (inicio + fim) / 2;

    if (vetor[meio] == numeroProcurado)
    {
      cout << meio << endl;
      return;
    }
    else if (vetor[meio] < numeroProcurado)
    {
      inicio = meio + 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim);
    }
    else
    {
      fim = meio - 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim);
    }
  }
  else
  {
    cout << -1 << endl;
    return;
  }
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

  buscaBinaria(vetor, numeroProcurado, inicio, fim);

  return 0;
}