/*
(BACKES,2012) A multiplicação de dois números naturais pode ser feita através de somas sucessivas (por exemplo, 2*3=2+2+2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois números naturais.

Entradas:
Dois números naturais.

Saídas:
Resultado da multiplicação dos dois números.

Exemplo de Entrada:
3 5

Exemplo de Saída:
15
*/

#include <iostream>
using namespace std;

void somaMultiplicada(int &a, int &b, int aux)
{
  if (a == 1)
  {
    return;
  }
  if (a == 0) // sempre lembrar do 0 porque vai da falha falando que está acessando memória indevida
  {
    b = 0;
    return;
  }

  a--;
  b += aux;
  somaMultiplicada(a, b, aux);
}

int main()
{
  int a, b;
  cin >> a >> b;

  // while (a > 0)
  // {
  //   b += b;
  //   a--;
  // }

  int aux = b;
  somaMultiplicada(a, b, aux);

  cout << b << endl;

  return 0;
}