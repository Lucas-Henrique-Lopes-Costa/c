#include <iostream>
using namespace std;

struct Time
{
  int numero;
  string nome;
  int gols;
};

void leitura(Time vet[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    cin >> vet[i].numero;
    cin >> vet[i].nome;
    cin >> vet[i].gols;
  }
}

void Ordenacao(Time vet[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < n; j++)
    {
      if (vet[j].numero < vet[menor].numero)
      {
        menor = j;
      }
    }
    swap(vet[menor], vet[i]);
  }
}

void Impressao(Time vet[], int tam, int numAlvo)
{
  int cont = 0;
  for (int i = 0; i < tam; i++)
  {
    if (vet[i].numero == numAlvo)
    {
      cout << i << endl;
      cout << vet[i].nome << " " << vet[i].gols << endl;
      cont++;
    }
  }
  if (cont == 0)
  {
    cout << -1 << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  Time vet[n];

  leitura(vet, n);

  Ordenacao(vet, n);

  int numProcurado;
  cin >> numProcurado;

  Impressao(vet, n, numProcurado);

  return 0;
}