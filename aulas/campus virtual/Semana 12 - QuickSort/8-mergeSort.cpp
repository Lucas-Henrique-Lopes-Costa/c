#include <iostream>
using namespace std;

void intercala(int v[], int p, int q, int r)
{
  int i = p, j = q;
  int tamanho = r - p + 1;
  int w[tamanho]; // vetor auxiliar

  int k = 0;

  while ((i < q) && (j <= r))
  {
    if (v[i] <= v[j])
    {
      w[k++] = v[i++]; /* w[k] = v[i]; k++; i++; */
    }
    else
    {
      w[k++] = v[j++]; /* w[k] = v[j]; k++; j++; */
    }
  }

  // terminou um dos vetores, agora copia o outro
  while (i < q)
  {
    w[k++] = v[i++];
  }
  while (j <= r)
  {
    w[k++] = v[j++];
  }

  // agora copiamos do vetor auxiliar aux[] em v[p:r]
  for (int m = 0; m < tamanho; m++)
  {
    v[p + m] = w[m];
  }

  cout << "Intercala: ";
  for (int i = p; i <= r; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

void mergesort(int a[], int inicio, int fim)
{
  int meio;

  // cout << "Antes (meio = " << (inicio + fim) / 2 << "): ";
  // for (int i = inicio; i <= fim; i++)
  // {
  //   cout << a[i] << " ";
  // }

  // cout << endl;

  if (inicio < fim)
  {
    meio = (inicio + fim) / 2;

    // divide o vetor até que cada subvetor tenha 1 elemento
    mergesort(a, inicio, meio);  // subvetor da esquerda
    mergesort(a, meio + 1, fim); // subvetor da direita

    // intercala os subvetores ordenados
    intercala(a, inicio, meio + 1, fim);
  }

  // cout << "Depois (meio = " << (inicio + fim) / 2 << "): ";
  // for (int i = inicio; i <= fim; i++)
  // {
  //   cout << a[i] << " ";
  // }

  // cout << endl;
}

int main()
{
  int a[] = {24, 5, 9, -3, 0, 11, 32, 8, 68, 41, 14, 26, 3};

  // tamanho do vetor
  int n = sizeof(a) / sizeof(a[0]);

  // intercala
  mergesort(a, 0, n - 1);

  // imprime vetor
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;

  return 0;
}