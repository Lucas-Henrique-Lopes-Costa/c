#include <iostream>
using namespace std;

void shell_sort(int vet[], int size)
{
  // sequência de Ciura, a que tem os melhores resultados experimentais
  // para vetores maiores usar recursão -> h[k] =  floor( 2.25 * h[k-1] ).
  int gaps[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
  int pos_gap = 8;
  while (gaps[pos_gap] > size)
  {
    pos_gap--;
  }
  int value;
  int j;

  while (pos_gap >= 0)
  {
    int gap = gaps[pos_gap];
    cout << "gap: " << gap << endl;

    for (int i = gap; i < size; i++)
    {
      value = vet[i];
      j = i;
      while ((j >= gap) && (value < vet[j - gap]))
      {
        vet[j] = vet[j - gap];
        j = j - gap;
      }
      vet[j] = value;

      for (int i = 0; i < size; i++)
      {
        cout << vet[i] << " ";
      }

      cout << endl;


    }

    pos_gap--;
  }
}

int main()
{
  // vetor de tamanho 20

  int vetor[7] = {30, 21, 16, 13, 8, 5, 1};

  shell_sort(vetor, 7);

  for (int i = 0; i < 7; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}