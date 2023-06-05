#include <iostream>

using namespace std;

void Max2(float vet[], int tamanho, float &A, float &B)
{
  if (vet[0] > vet[1])
  {
    A = vet[0];
    B = vet[1];
  }
  else
  {
    A = vet[1];
    B = vet[0];
  }

  for (int i = 2; i < tamanho; i++)
  {
    if (vet[i] > A)
    {
      B = A;
      A = vet[i];
    }
    else if (vet[i] > B)
    {
      B = vet[i];
    }
  }
}
int main()
{

  int tam;
  cin >> tam;
  float vet[tam];
  for (int i = 0; i < tam; i++)
  {
    cin >> vet[i];
  }

  float A;
  float B;

  Max2(vet, tam, A, B);

  cout << A << " " << B << endl;
  return 0;
}