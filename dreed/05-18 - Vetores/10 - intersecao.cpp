#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que lê dois vetores de números reais, preencha-os e escreva a interseção entre eles. Suponha que não existe repetição de elementos num mesmo vetor.

    Caso não haja elementos na interseção, escreva -1.

    Entradas (em ordem):

    A quantidade de elementos do primeiro vetor,
    a quantidade de elementos do segundo vetor,
    os elementos do primeiro vetor (números reais, na mesma linha),
    os elementos do segundo vetor (números reais, na mesma linha).
    Saídas:

    Os elementos que estão nos dois vetores, na ordem em que eles aparecem no primeiro vetor.
    Exemplo de entrada:

    5
    3
    4 2 9 8 6
    2 5 0
    Exemplo de saída:

    2
  */

  int n1, n2;

  cin >> n1 >> n2;

  int v1[n1], v2[n2];

  for (int i = 0; i < n1; i++)
  {
    cin >> v1[i];
  }

  for (int i = 0; i < n2; i++)
  {
    cin >> v2[i];
  }

  bool encontrou = false;

  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      if (v1[i] == v2[j])
      {
        cout << v1[i] << endl;
        encontrou = true;
      }
    }
  }

  if (!encontrou)
  {
    cout << -1 << endl;
  }

  return 0;
}