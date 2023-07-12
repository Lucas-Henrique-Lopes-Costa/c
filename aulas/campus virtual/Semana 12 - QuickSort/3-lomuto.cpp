#include <iostream>
using namespace std;

void particiona_L(int v[], int p, int r)
{                         // v[p..r]
  int pivo = v[r];        // final é o pivô
  int j = p;              // j é o primeiro elemento do pivô
  int k;                  // k é o elemento que está sendo analisado
  for (k = p; k < r; k++) // vai colocando os elementos menores no começo e maiores no final
  {
    if (v[k] <= pivo) // se o elemento for menor ou igual ao pivô troca com o primeiro elemento do pivô
    {
      cout << "Troca " << v[j] << " com " << v[k] << ", porque " << v[k] << " e menor ou igual a " << pivo << endl;
      swap(v[j], v[k]); // troca o elemento atual com o primeiro elemento do pivô
      j++;
    }

    cout << "Pivo = " << pivo << " | k = " << k << " | j = " << j << endl;
    for (int i = 0; i < 8; i++)
      cout << v[i] << " ";
    
    cout << endl;
    cout << endl;
  }
  swap(v[j], v[r]); // coloca o pivô na posição correta = j
}

int main()
{
  int v[] = {24, 0, 7, 48, 1, 59, 2, 21};

  particiona_L(v, 0, 7);

  for (int i = 0; i < 8; i++)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}