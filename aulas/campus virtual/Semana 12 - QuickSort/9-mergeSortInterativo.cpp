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
}

void mergeiterativo(int v[], int tam)
{
  int p, r, b = 1;
  while (b < tam)
  {
    p = 0;
    while (p + b < tam)
    {
      r = p + 2 * b - 1;
      if (r >= tam)
        r = tam - 1;
      intercala(v, p, p + b, r);
      p = p + 2 * b;
    }

    cout << "Blocos de tamanho " << b << ": ";
    for (int i = 0; i < tam; i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;

    b = 2 * b; // dobra o tamanho do bloco
  }
}

int main()
{
  int a[] = {17, 31, 26, 99, 52, 44, 38, 29, 10, 1, 5, 2, 42};

  // tamanho do vetor
  int n = sizeof(a) / sizeof(a[0]);

  // intercala
  mergeiterativo(a, n);

  // imprime vetor
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;

  return 0;
}