#include <iostream>
using namespace std;

void intercala(int a[], int inicio, int meio, int fim)
{
  int i = inicio, j = meio + 1;
  int tamanho = fim - inicio + 1;
  int aux[tamanho];
  for (int k = 0; k < tamanho; k++)
  {
    if ((i <= meio) && (j <= fim))
    {
      if (a[i] <= a[j])
      {
        aux[k] = a[i];
        i++;
      }
      else
      {
        aux[k] = a[j];
        j++;
      }
    }
    else if (i > meio)
    {
      aux[k] = a[j];
      j++;
    }
    else
    {
      aux[k] = a[i];
      i++;
    }
  }
  for (int k = 0; k < tamanho; k++)
  {
    a[inicio + k] = aux[k];
  }

  cout << "Blocos de tamanho " << tamanho << ": ";
  for (int i = 0; i < tamanho; i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;
}

void mergesort(int a[], int inicio, int fim)
{
  int meio;
  if (inicio < fim)
  {
    meio = (inicio + fim) / 2;
    mergesort(a, inicio, meio);
    mergesort(a, meio + 1, fim);
    intercala(a, inicio, meio, fim);
  }
}

int main()
{
  int a[] = {24, 5, 9, -3, 0, 11, 32, 8, 68, 41, 14, 26, 3};

  // tamanho do vetor
  int n = sizeof(a) / sizeof(a[0]);

  // intercala
  mergesort(a, 0, n - 1);

  return 0;
}