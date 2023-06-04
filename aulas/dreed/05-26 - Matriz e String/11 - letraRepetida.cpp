#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
  /*
    Faça um programa que dada uma string de entrada, informa qual o caractere que mais se repete.

    Entradas:

    Uma string.
    Saídas:

    Letra que mais se repete.
    Exemplo de Entrada:

    aabbbarra
    Exemplo de Saída:

    a
  */

  // leitura dos dados
  string texto;
  cin >> texto;

  // processamento
  int maiorRepeticao = 0;
  int letraMaisRepetida = 0;

  for (long unsigned i = 0; i < texto.length(); i++)
  {
    int repeticao = 0;

    for (long unsigned j = 0; j < texto.length(); j++)
    {
      if (texto[i] == texto[j])
      {
        repeticao++;
      }
    }

    if (repeticao > maiorRepeticao)
    {
      maiorRepeticao = repeticao;
      letraMaisRepetida = i;
    }
  }

  // output
  cout << texto[letraMaisRepetida] << endl;

  return 0;
}
