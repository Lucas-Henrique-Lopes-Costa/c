#include <iostream>

using namespace std;

// preenche vetor
int *preenche(int vet[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    cin >> vet[i];
  }
  return vet;
}

// ordena vetor
int *ordenaCrescente(int vet[], int tam)
{
  int posMenor;
  int aux;
  for (int i = 0; i < tam - 1; ++i)
  {
    posMenor = i;
    for (int j = i + 1; j < tam; ++j)
    {
      if (vet[j] < vet[posMenor])
        posMenor = j;
    }
    aux = vet[i];
    vet[i] = vet[posMenor];
    vet[posMenor] = aux;
  }
  return vet;
}

void ordenaDecrescente(int vet[], int tam, int posicao)
{
  int posMaior;
  int aux;
  for (int i = 0; i < tam; ++i)
  {
    posMaior = i;
    for (int j = i + 1; j < tam; ++j)
    {
      if (vet[j] > vet[posMaior])
        posMaior = j;
    }
    aux = vet[i];
    vet[i] = vet[posMaior];
    vet[posMaior] = aux;
  }

  for (int i = 0; i < tam; i++)
  {
    cout << vet[i] << " ";
  }
}

int main()
{
  int tamanho;
  int posicao;

  cin >> tamanho;
  cin >> posicao;

  int *vetor = new int[tamanho];
  vetor = preenche(vetor, tamanho);
  vetor = ordenaCrescente(vetor, tamanho);

  ordenaDecrescente(vetor, tamanho, posicao);

  return 0;
}