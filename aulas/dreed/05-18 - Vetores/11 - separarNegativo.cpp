#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos; o segundo deve conter os números negativos. Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas. Assuma que todos os dados de entrada serão fornecidos em uma única linha. Assuma também que sempre haverá no mínimo um número positivo e um número negativo nos dados de entrada.

    Obs.: Vetores em Python são implementados como listas cujos elementos são todos homogêneos.

    Entradas:

    - Oito numeros inteiros.
    Saídas:

    - Vetor resultante com os números positivos.
    - Vetor resultante com os números negativos.
    Entradas:
    1 2 3 4 5 -5 -4 -1
    Saídas:
    1 2 3 4 5
    -5 -4 -1 
  */

  int v[8], vPos[8], vNeg[8], nPos = 0, nNeg = 0;

  for (int i = 0; i < 8; i++)
  {
    cin >> v[i];

    if (v[i] >= 0)
    {
      vPos[nPos] = v[i];
      nPos++;
    }
    else
    {
      vNeg[nNeg] = v[i];
      nNeg++;
    }
  }

  for (int i = 0; i < nPos; i++)
  {
    cout << vPos[i] << " ";
  }

  cout << endl;

  for (int i = 0; i < nNeg; i++)
  {
    cout << vNeg[i] << " ";
  }

  cout << endl;
  
  return 0;
}