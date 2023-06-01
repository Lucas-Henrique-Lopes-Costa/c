#include <iostream>
using namespace std;

int maiorElemento(int vetor[], int n)
{
  int maior = vetor[0];
  for (int i = 1; i < n; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  return maior;
}

int main()
{
  // Faça uma função que recebe um vetor e a quantidade de elementos que ele possui e retorna o maior elemento desse vetor.

  int n;
  cout << "Digite a quantidade de elementos do vetor: ";
  cin >> n;

  int vetor[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite o elemento " << i + 1 << ": ";
    cin >> vetor[i];
  }

  cout << "Maior elemento: " << maiorElemento(vetor, n) << endl;

  return 0;
}