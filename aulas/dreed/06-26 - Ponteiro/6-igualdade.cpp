/*
Dois vetores são considerados iguais se ambos contiverem o mesmo conjunto de elementos, embora as permutações de elementos possam ser diferentes.

Faça um programa para receba o tamanho N de dois vetores A e B de igual tamanho e descobra se os vetores são iguais ou não.

Se forem iguais imprima "IGUAIS", caso contrário imprima "DIFERENTES".

Observação: não haverá elementos repetidos em cada vetor.

Exemplo de Entrada:
5
1 2 3 4 5
5 4 3 2 1

Exemplo de Saída:
IGUAIS

Exemplo de Entrada:
5
1 2 3 6 5
5 4 3 2 1

Exemplo de Saída:
DIFERENTES
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int *a = new int[n];
  int *b = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  bool iguais = true;
  for (int i = 0; i < n; i++)
  {
    bool achou = false;
    for (int j = 0; j < n; j++)
    {
      if (a[i] == b[j] and !achou)
      {
        achou = true;
      }
    }
    if (!achou and iguais)
    {
      iguais = false;
    }
  }

  if (iguais)
  {
    cout << "IGUAIS" << endl;
  }
  else
  {
    cout << "DIFERENTES" << endl;
  }

  return 0;
}