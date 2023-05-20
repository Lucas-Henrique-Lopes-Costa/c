#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre: os números múltiplos de 2; os números múltiplos de 3; e os números múltiplos de 2 e 3. Os números múltiplos de 2 e 3 podem aparecer nos casos isolados. Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.

    Obs: para soluções em Python utilize as listas padrões da linguagem ao invés de vetores.

    Entradas:

    Sequência de sete números inteiros
    Saídas:

    Números que são múltiplos de 2;
    Números que são múltiplos de 3;
    Números que são múltiplos de 2 e 3 simultaneamente.
    Exemplo de entrada:

    4 6 3 9 7 10 13
    Exemplo de saída:

    4 6 10
    6 3 9
    6
  */

  int vetor[7], multiplos2[7], multiplos3[7], multiplos2e3[7];

  for (int i = 0; i < 7; i++)
  {
    cin >> vetor[i];
  }

  int indexMultiplos2 = 0, indexMultiplos3 = 0, indexMultiplos2e3 = 0;

  for (int i = 0; i < 7; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      multiplos2[indexMultiplos2] = vetor[i];
      indexMultiplos2++;
    }

    if (vetor[i] % 3 == 0)
    {
      multiplos3[indexMultiplos3] = vetor[i];
      indexMultiplos3++;
    }

    if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0)
    {
      multiplos2e3[indexMultiplos2e3] = vetor[i];
      indexMultiplos2e3++;
    }
  }

  if (indexMultiplos2 == 0)
  {
    cout << 0 << endl;
  }
  else
  {
    for (int i = 0; i < indexMultiplos2; i++)
    {
      cout << multiplos2[i] << " ";
    }
    cout << endl;
  }

  if (indexMultiplos3 == 0)
  {
    cout << 0 << endl;
  }
  else
  {
    for (int i = 0; i < indexMultiplos3; i++)
    {
      cout << multiplos3[i] << " ";
    }
    cout << endl;
  }

  if (indexMultiplos2e3 == 0)
  {
    cout << 0 << endl;
  }
  else
  {
    for (int i = 0; i < indexMultiplos2e3; i++)
    {
      cout << multiplos2e3[i] << " ";
    }
    cout << endl;
  }

  return 0;
}