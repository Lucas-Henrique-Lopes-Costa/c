#include <iostream>
using namespace std;

int buscaVetor(int vetor[], int tamanho, int procura)
{
  int cont = 0;
  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] == procura)
    {
      cont++;
    }
  }

  if (cont == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{
  /*
    Escreva uma função que recebe um vetor de inteiros, o tamanho do vetor, e um inteiro. A função retorna 1 se o inteiro estiver no vetor, 0 senão. Escreva um programa para utilizar esta função.

    Entradas:
    Tamanho do vetor
    Elementos do vetor
    Um numero a ser procurado

    Saídas:
    1 caso o elemento tenha sido encontrado
    0 caso o contrário

    Exemplo de Entradas:
    5
    2 4 6 8 10
    6

    Exemplo de Saída:
    1

    Exemplo de Entradas:
    7
    10 20 30 40 50 60 70
    15

    Exemplo de Saída:
    0
  */

  int n;
  cin >> n;

  int numeros[n];
  for (int i = 0; i < n; i++)
  {
    cin >> numeros[i];
  }

  int numero;
  cin >> numero;

  cout << buscaVetor(numeros, n, numero) << endl;

  return 0;
}
