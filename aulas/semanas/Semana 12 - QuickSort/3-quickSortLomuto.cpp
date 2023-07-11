#include <iostream>
using namespace std;

int particiona_L(int v[], int p, int r)
{                         // v[p..r]
  int pivo = v[r];        // final é o pivô
  int j = p;              // j é o primeiro elemento do pivô
  int k;                  // k é o elemento que está sendo analisado
  for (k = p; k < r; k++) // vai colocando os elementos menores no começo e maiores no final
  {
    if (v[k] <= pivo) // se o elemento for menor ou igual ao pivô troca com o primeiro elemento do pivô
    {
      swap(v[j], v[k]); // troca o elemento atual com o primeiro elemento do pivô
      j++;
    }
  }
  swap(v[j], v[r]); // coloca o pivô na posição correta = j
  return j;
}

void quickSort(int v[], int pivo, int fim)
{
  int novoPivo;
  if (pivo < fim)
  {
    novoPivo = particiona_L(v, pivo, fim);
    quickSort(v, pivo, novoPivo - 1);
    quickSort(v, novoPivo + 1, fim);
  }
}

int main()
{
  int v[] = {24, 0, 7, 48, 1, 59, 2, 21};

  quickSort(v, 0, 7);

  for (int i = 0; i < 8; i++)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}