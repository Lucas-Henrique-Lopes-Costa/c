#include <iostream>
using namespace std;

void intercala(int a[], int inicio, int meio, int fim)
{
  int i = inicio, j = meio + 1;
  int tamanho = fim - inicio + 1;
  int aux[tamanho]; // vetor auxiliar

  for (int k = 0; k < tamanho; k++)
  {
    if ((i <= meio) && (j <= fim))
    {
      if (a[i] <= a[j])
      {
        aux[k] = a[i]; // copia trecho1 em aux[]
        i++;           // avança em trecho1
      }
      else
      {                //
        aux[k] = a[j]; // copia trecho2 em aux[]
        j++;           // avanca em trecho2
      }
    }

    else if (i > meio)
    { // terminou o trecho1
      aux[k] = a[j];
      j++;
    }

    else
    { // terminou o trecho2
      aux[k] = a[i];
      i++;
    }
  }
  // terminando: copiar de aux[] em a[inicio:fim]
  for (int k = 0; k < tamanho; k++)
  {
    a[inicio + k] = aux[k];
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