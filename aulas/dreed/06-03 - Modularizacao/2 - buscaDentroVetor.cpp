#include <iostream>
using namespace std;

int buscaVetor(int vetor[], int tamanho, int procura)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] == procura)
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  /*
    Escreva uma função que recebe um vetor de inteiros V, o tamanho N de V, e um inteiro A. A função retorna a posição de A no vetor caso ela esteja no vetor, senão retorna -1. Escreva um programa para utilizar esta função, sendo que no início o usuário deve informar o tamanho do vetor e preenchê-lo, bem como passar para o programa o valor que deseja buscar dentro dele.

    Entrada:
    O tamanho N do vetor;
    O vetor V de inteiros.
    O valor A que será procurado.
    
    Saída:
    A posição de A, caso pertença a V;
    -1, caso contrário.

    Exemplo de entrada:
    5
    5 4 3 2 1
    3
      
    Exemplo de saída:
    2
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
