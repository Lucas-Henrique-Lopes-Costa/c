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

int main()
{
  int a[] = {0, 5, 7, 14, 21, 3, 4, 8, 9};

  // tamanho do vetor
  int n = sizeof(a) / sizeof(a[0]);

  // intercala
  intercala(a, 0, 4, n - 1);

  // imprime vetor
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;

  return 0;
}