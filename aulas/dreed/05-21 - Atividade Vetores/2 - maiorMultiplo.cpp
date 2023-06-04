#include <iostream>
using namespace std;

int main()
{
  /*
    Crie um programa que preencha um vetor com 10 números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números múltiplos de 2, e o segundo deve conter os números múltiplos de 3. O seu programa deverá também imprimir no dispositivo de saída padrão o maior múltiplo de 2 e o maior múltiplo de 3, associados aos vetores resultantes, respectivamente.

    Assuma que todos os dados de entrada serão fornecidos em uma única linha. Assuma também que sempre haverá no mínimo um número múltiplo de 2 e um número múltiplo de 3 nos dados de entrada. E caso um número seja múltiplo de 2 e 3 simultaneamente, este número deverá aparecer em ambos os vetores resultantes.

    Entradas:

    Dez números inteiros representando o vetor geral.
    Saídas:

    Vetor resultante com os números inteiros múltiplos de 2. Na mesma ordem em que apareceram no vetor de entrada.
    Maior número múltiplo de 2 do primeiro vetor resultante (Número Inteiro).
    Vetor resultante com os números inteiros múltiplos de 3. Na mesma ordem em que apareceram no vetor de entrada.
    Maior número múltiplo de 3 do segundo vetor resultante (Número Inteiro).
    Exemplo de Entrada:

    10 40 13 -70 85 90 54 69 78 32
    Exemplo de Saída:

    10 40 -70 90 54 78 32
    90
    90 54 69 78
    90
    Exemplo de Entrada:

    -80 -75 -3 -7 -8 -9 -220 -78 -90 -1000
    Exemplo de Saída:

    -80 -8 -220 -78 -90 -1000
    -8
    -75 -3 -9 -78 -90
    -3
    Exemplo de Entrada:

    0 78 200 -80 -60 75 66 12 24 91
    Exemplo de Saída:

    0 78 200 -80 -60 66 12 24
    200
    0 78 -60 75 66 12 24
    78
  */

  int v[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> v[i];
  }

  int v2[10];
  int menor2 = 0;

  for (int i = 0; i < 10; i++)
  {
    if (v[i] % 2 == 0)
    {
      v2[i] = v[i];

      if (v[i] < menor2)
      {
        menor2 = v[i];
      }
    }
  }

  int maior2 = menor2;

  int j = 0;

  for (int i = 0; i < 10; i++)
  {
    if (v[i] % 2 == 0)
    {
      v2[j] = v[i];
      j++;

      if (v[i] > maior2)
      {
        maior2 = v[i];
      }
    }
  }

  for (int i = 0; i < j; i++)
  {
    cout << v2[i] << " ";
  }

  cout << endl
       << maior2 << endl;

  int v3[10];

  int menor3 = 0;

  for (int i = 0; i < 10; i++)
  {
    if (v[i] % 3 == 0)
    {
      v3[i] = v[i];

      if (v[i] < menor3)
      {
        menor3 = v[i];
      }
    }
  }

  int maior3 = menor3;

  j = 0;

  for (int i = 0; i < 10; i++)
  {
    if (v[i] % 3 == 0)
    {
      v3[j] = v[i];
      j++;

      if (v[i] > maior3)
      {
        maior3 = v[i];
      }
    }
  }

  for (int i = 0; i < j; i++)
  {
    cout << v3[i] << " ";
  }

  cout << endl
       << maior3 << endl;

  return 0;
}