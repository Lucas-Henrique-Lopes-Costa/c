#include <iostream>
using namespace std;

struct idades
{
  string nome;
  int idade_pai, idade_mae, idade_filho;
};

int main()
{
  int capacidade = 3;
  idades *familias = NULL;
  familias = new idades[capacidade];

  bool fim = true;
  int i = 0;
  string verifica;
  int *alocacao;
  int tam1 = 0;
  while (fim)
  {
    cin >> verifica;
    if (verifica != "FIM")
    {
      if (i == capacidade)
      {
        idades *novo = new idades[capacidade + 3];
        copy(familias, familias + capacidade, novo);
        delete[] familias;
        familias = novo;
        capacidade += 3;
        if (tam1 == 0)
        {
          alocacao = new int[tam1 + 1];
          alocacao[tam1] = capacidade;
          tam1++;
        }
        else
        {
          int *aux = new int[tam1 + 1];
          copy(alocacao, alocacao + tam1, aux);
          delete[] alocacao;
          alocacao = aux;
          alocacao[tam1] = capacidade;
          tam1++;
        }
      }
      familias[i].nome = verifica;
      cin >> familias[i].idade_pai >> familias[i].idade_mae >> familias[i].idade_filho;
      i++;
    }
    else
    {
      fim = false;
    }
  }

  if (tam1 != 0)
    for (int y = 0; y < tam1; y++)
      cout << alocacao[y] << endl;

  string *iguais;
  int tam = 0;
  int cont = 0;
  for (int y = 0; y < i; y++)
  {
    cont = 0;
    for (int j = 0; j < i; j++)
    {
      if (familias[y].idade_filho == familias[j].idade_filho)
      {
        cont++;
      }
    }
    if (cont > 1)
    {
      if (tam == 0)
      {
        iguais = new string[tam + 1];
        iguais[tam] = familias[y].nome;
        tam++;
      }
      else
      {
        string *novo = new string[tam + 1];
        copy(iguais, iguais + tam, novo);
        delete[] iguais;
        iguais = novo;
        tam++;
        iguais[tam - 1] = familias[y].nome;
      }
    }
  }

  if (tam != 0)
  {
    for (int y = 0; y < tam; y++)
      cout << iguais[y] << endl;
  }
  else
  {
    cout << "NENHUM" << endl;
  }

  return 0;
}