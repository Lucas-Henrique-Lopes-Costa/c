#include <iostream>
using namespace std;

int particiona(int v[], int c, int f)
{ // c = começo, f = fim
  int pivo = v[c], i = c + 1, j = f;
  // i - primeiro elemento do pivô | j - ultimo elemento do pivô
  while (i <= j)
  {
    if (v[i] <= pivo)      // se o elemento for menor que o pivô
      i++;                 // avança para o próximo elemento
    else if (pivo <= v[j]) // se o elemento for maior que o pivô
      j--;                 // recua para o elemento anterior
    else
    { // (v[i] > pivo) e (v[j] < pivo)
      swap(v[i], v[j]);
      i++;
      j--;
    }
  }            // agora i == j+1
  v[c] = v[j]; // coloca o pivô na posição correta
  v[j] = pivo;
  return j; // retorna posição do pivô
}

void quicksort(int a[], int pos_pivo, int fim)
{
  int pos_novo_pivo;
  if (pos_pivo < fim)
  {
    pos_novo_pivo = particiona(a, pos_pivo, fim);
    quicksort(a, pos_pivo, pos_novo_pivo - 1);
    quicksort(a, pos_novo_pivo + 1, fim);
  }
}

int main()
{
  int v[] = {5, 3, 2, 4, 7, 1, 0, 6};

  quicksort(v, 0, 7);

  for (int i = 0; i < 8; i++)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}