#include <iostream>
using namespace std;

int main()
{
  /*
    Em estatística, moda é o valor que ocorre com maior frequência num conjunto de dados, não sendo necessariamente única. Por exemplo a série {1, 3, 5, 5, 6, 6} apresenta 2 modas: 5 e 6.

    Faça um programa que leia vários números naturais até encontrar um -1 (menos um). O programa deverá calcular e escrever um inteiro representando a quantidade de modas do vetor. Se todos os valores forem diferentes, todos eles são moda.

    Entradas:

    Vários números naturais (de 1 a 200 números, cada um deles entre zero e 50).
    O número -1, indicando final dos dados (esse número não faz parte do conjunto de dados).
    Saídas:

    A quantidade de modas no conjunto.
    Exemplo de entrada:

    2 4 1 10 4 2 1 -1
    Exemplo de saída:

    3
  */

  int n;
  cin >> n;
  int v[n];

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int contModa = 0;
  bool encontrou = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n && !encontrou; j++)
    {
      if (v[i] == v[j] && i != j)
      {
        encontrou = true;
      }
    }
    if (!encontrou)
    {
      contModa++;
    }

    encontrou = false;
  }

  cout << contModa << endl;

  return 0;
}