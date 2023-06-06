#include <iostream>

using namespace std;

int main()
{
  // peça um numero e atribua ele no tamanho do vetor e depois pegue os dados do vetor
  int n;
  cin >> n;

  int vetor[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  // imprima o vetor
  for (int i = 0; i < n; i++)
  {
    cout << vetor[i] << " ";
  }

  return 0;
}