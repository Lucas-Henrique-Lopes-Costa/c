/*
Faça um programa que usa busca binária para procurar números num vetor. O programa deve escrever todos os números que foram comparados ao número procurado, na ordem.

O programa deverá ler o vetor no qual a busca será realizada, este vetor já estará ordenado.

Entradas:
o número de elementos do vetor,
os elementos do vetor (números inteiros que estão em ordem crescente),
o número procurado.

Saídas: O programa deverá escrever cada elemento do vetor comparado com o número procurado, na ordem em que eles forem comparados.

Exemplo de entrada:
10
1 2 3 4 5 6 7 8 9 10
3

Exemplo de saída:
5 2 3

Exemplo de entrada (número não existe):
10
1 2 3 4 5 6 7 8 9 10
11

Exemplo de saída:
5 8 9 10
*/
#include <iostream>
using namespace std;

void buscaBinaria(int vetor[], int numeroProcurado, int inicio, int fim)
{
  if (inicio <= fim)
  {
    int meio = (inicio + fim) / 2;

    cout << vetor[meio] << " ";

    if (vetor[meio] == numeroProcurado)
    {
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