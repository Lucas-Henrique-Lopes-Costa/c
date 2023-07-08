/*
Faça um programa que recebe um vetor V de N elementos e determina, de forma recursiva, o menor elemento do vetor. Podemos usar a seguinte ideia:

O menor elemento de um vetor de uma única posição é o seu único elemento.
O menor elemento de um vetor de mais de uma posição é o menor entre o primeiro elemento e o menor do restante do vetor.

Entradas:
Tamanho N do vetor.
Elementos do vetor.

Saídas
Menor elemento do vetor.
Exemplos de Entradas e Saídas:

Entradas:
4
2 4 3 1

Saídas:
1
*/

#include <iostream>
using namespace std;

void buscaMenor(int &menor, int vet[], int n, int index)
{
  if (n == index)
    return;

  if (vet[index] < menor)
  {
    menor = vet[index];
  }

  index++;
  buscaMenor(menor, vet, n, index);
}

int main()
{
  int n;
  cin >> n;

  int vet[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vet[i];
  }

  int menor = vet[0];
  if (n == 1)
  {
    cout << menor;
  }
  else if (n == 0)
    menor = 0;
  else
  {
    int index = 0;
    buscaMenor(menor, vet, n, index);

    cout << menor;
  }

  cout << endl;

  return 0;
}