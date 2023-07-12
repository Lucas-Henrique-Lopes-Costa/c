#include <iostream>
using namespace std;

int main()
{
  int vetor[10];
  for (int i = 0; i < 10; ++i)
    cin >> vetor[i];

  int procurado, posicao;
  int *ptPos = NULL;

  cin >> procurado;

  int i = 0;
  while ((i < 10) and (ptPos == NULL))
  {
    if (vetor[i] == procurado)
    {
      posicao = i;
      ptPos = &posicao;
    }
    
    i++;
  }

  if (ptPos != NULL)
    cout << "Encontrado na posicao: " << *ptPos << "\n";
}