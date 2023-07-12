#include <iostream>
using namespace std;

void dobra(int *vet, int tam)
{
  int i = 0;
  while (i < tam)
  {
    vet[i] = 2 * vet[i];
    ++i;
  }
}

int main()
{
  int vetor[5] = {1, 2, 3, 4, 5};
  int i = 0;
  // primeira exibição
  while (i < 5)
  {
    cout << vetor[i] << " ";
    i++;
  }
  cout << endl;

  dobra(vetor, 5);
  i = 0; // reinicia contador

  // segunda exibição
  while (i < 5)
  {
    cout << vetor[i] << " ";
    i++;
  }
  cout << endl;
  return 0;
}
