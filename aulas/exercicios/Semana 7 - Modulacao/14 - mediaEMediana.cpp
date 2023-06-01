#include <iostream>
using namespace std;

float media(int vetor[], int n)
{
  float soma = 0;
  for (int i = 0; i < n; i++)
  {
    soma += vetor[i];
  }
  return soma / n;
}

int mediana(int vetor[], int n)
{
  if (n % 2 == 0)
  {
    return (vetor[n / 2] + vetor[(n / 2) - 1]) / 2;
  }
  else
  {
    return vetor[n / 2];
  }
}

int main()
{
  // Faça um procedimento que recebe um vetor com os dados em ordem crescente e a quantidade de elementos que ele possui e retorna a média e a mediana desse vetor.

  int n;
  cin >> n;

  int vetor[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  cout << "Media: " << media(vetor, n) << endl;
  cout << "Mediana: " << mediana(vetor, n) << endl;

  return 0;
}