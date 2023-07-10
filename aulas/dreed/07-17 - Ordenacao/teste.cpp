#include <iostream>

using namespace std;

struct bolls
{
  bool troca;
  bool compara;
};

void impressao_bugada(int vet[], int tam, bolls vet2[])
{
  for (int i = 0; i < tam; i++)
  {
    cout << vet[i];

    if (vet2[i].compara)
    {
      cout << " *";
    }
    if (vet2[i].troca)
    {
      cout << " t";
    }
    if (!vet2[i].troca and !vet2[i].compara)
    {
      cout << "  ";
    }

    vet2[i].compara = false;
    vet2[i].troca = false;

    cout << "    ";
  }
  cout << endl;
}

void ordena(int vet[], int tam, bolls vet2[])
{
  for (int i = 0; i < tam - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < tam; j++)
    {
      vet2[menor].compara = true;
      vet2[j].compara = true;
      if (vet[j] < vet[menor])
      {
        menor = j;
      }
      impressao_bugada(vet, tam, vet2);
    }
    vet2[i].troca = true;
    vet2[menor].troca = true;
    impressao_bugada(vet, tam, vet2);
    swap(vet[i], vet[menor]);
  }
  impressao_bugada(vet, tam, vet2);
}
int main()
{
  int n;
  cin >> n;
  int vet[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vet[i];
  }
  bolls vetbool[n];
  for (int i = 0; i < n; i++)
  {
    vetbool[i].compara = false;
    vetbool[i].troca = false;
  }
  ordena(vet, n, vetbool);

  return 0;
}