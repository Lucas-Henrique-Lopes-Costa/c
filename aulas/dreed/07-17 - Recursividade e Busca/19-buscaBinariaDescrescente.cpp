/*
Faça um programa que realiza busca binária de números inteiros em ordem decrescente. O programa deve escrever a posição do valor procurado. Se o valor procurado não estiver no vetor, a posição -1 (menos um) deverá ser escrita. Se o valor procurado ocorrer mais de uma vez no vetor, a primeira ocorrência que for encontrada é a que deve ser informada. A busca binária deve ser realizada por um módulo recursivo.

Entradas:
A quantidade de números a ser lida.
Vários números inteiros em ordem decrescente.
O valor procurado (número inteiro).

Saída:
A posição do valor procurado.

Exemplo de entrada:
6
8 7 5 4 2 2
5

Exemplo de saída:
2
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
    else if (vetor[meio] > numeroProcurado)
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