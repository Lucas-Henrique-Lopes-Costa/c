#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  /*
    Dadas as temperaturas que foram registradas diariamente durante uma semana, faça um programa que, usando vetores, calcule e mostre a temperatura média e em quantos dias dessa semana a temperatura esteve acima da média.

    Entradas:

    double vet[7] - Vetor de temperaturas (separados por espaços)
    Saída:

    double media - temperatura média calculada
    int total - total de dias com temperatura acima da média
    Exemplo de Entradas e Saída:
    Entradas:

    25 26.8 32 27.5 26.5 28.1 24
    Saída:

    27.1
    3
  */

  // lendo as temperaturas
  double vet[7];
  for (int i = 0; i < 7; i++)
  {
    cin >> vet[i];
  }

  // calculando a média
  double media = 0;

  for (int i = 0; i < 7; i++)
  {
    media += vet[i];
  }

  media /= 7;

  // calculando o total de dias com temperatura acima da média
  int total = 0;

  for (int i = 0; i < 7; i++)
  {
    if (vet[i] > media)
    {
      total++;
    }
  }

  // mostrando a média e o total
  cout << fixed << setprecision(1) << media << endl;
  cout << total << endl;

  return 0;
}