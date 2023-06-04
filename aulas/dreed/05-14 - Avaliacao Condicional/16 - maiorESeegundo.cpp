#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Faça um algoritmo que leia quatro números reais diferentes. Após isso, imprima o maior valor e o segundo maior valor.

    Entradas:

    quatro numeros em ponto flutuante
    Saídas:

    dois numeros em ponto flutuante (maior e segundo maior elemento)

    Exemplo de entrada:
    13.1
    2.2
    5.8
    6.9

    Exemplo de saída:

    13.1
    6.9
  */

  float n1, n2, n3, n4, maior, segundoMaior;

  cin >> n1;

  maior = n1;

  cin >> n2;

  if (n2 > maior)
  {
    segundoMaior = maior;
    maior = n2;
  }
  else
  {
    segundoMaior = n2;
  }

  cin >> n3;

  if (n3 > maior)
  {
    segundoMaior = maior;
    maior = n3;
  }
  else if (n3 > segundoMaior)
  {
    segundoMaior = n3;
  }

  cin >> n4;

  if (n4 > maior)
  {
    segundoMaior = maior;
    maior = n4;
  }
  else if (n4 > segundoMaior)
  {
    segundoMaior = n4;
  }

  cout << maior << endl;
  cout << segundoMaior << endl;

  return 0;
}