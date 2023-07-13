#include <iostream>
using namespace std;

void intercala_vet(int a[], int b[], int c[], int m, int n)
{
  int i = 0; // i percorre a[]
  int j = 0; // j percorre b[]
  for (int k = 0; k < m + n; k++)
  { // k percorre c[]
    if ((i < m) && (j < n))
    { // não terminou a[] e b[]
      if (a[i] <= b[j])
      {
        c[k] = a[i]; // copia elemento de a[] em c[]
        i++;         // avança no vetor a[]
      }
      else
      { // b[j] é menor que a[i]
        c[k] = b[j];
        j++;
      }
    }
    else if (i == m)
    { // terminou a[], copia b[]
      c[k] = b[j];
      j++;
    }
    else
    { // terminou b[], copia a[]
      c[k] = a[i];
      i++;
    }
  } // fim do for
}

int main()
{
  int a[] = {1, 3, 5, 7, 9};

  int b[] = {2, 4, 6, 8, 10, 12, 14};

  int c[12];

  intercala_vet(a, b, c, 5, 7);

  for (int i = 0; i < 12; i++)
    cout << c[i] << " ";

  cout << endl;

  return 0;
}