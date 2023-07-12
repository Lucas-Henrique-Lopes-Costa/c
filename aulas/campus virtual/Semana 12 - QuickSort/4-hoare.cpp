#include <iostream>
using namespace std;

int part_Hoare(int A[], int lo, int hi)
{ // A[lo..hi]
  int pivo = A[lo + (hi - lo) / 2];
  int i = lo - 1;
  int j = hi + 1;

  while (true)
  { // laço infinito
    // avança quando A[i] < pivo
    do
    {
      i++;
    } while (A[i] < pivo);

    // recua quando A[j] > pivo
    do
    {
      j--;
    } while (A[j] > pivo);

    // esse avança e recua é para encontrar os elementos que estão do lado errado do pivô

    if (i >= j)
      return j;
    swap(A[i], A[j]);
  } // término do while
}

int main()
{
  int v[] = {24, 0, 7, 48, 1, 59, 2, 21};

  part_Hoare(v, 0, 7);

  for (int i = 0; i < 8; i++)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}