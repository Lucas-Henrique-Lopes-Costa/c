#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    Em muitos programas é muito útil ter os dados em uma determinada ordem: números do menor para o maior, palavras em ordem alfabética, etc. Nesse exercício você deve criar um programa que recebe três números inteiros em ordem crescente, ou seja, o usuário fornecerá os números garantindo que o segundo é maior que o primeiro e o terceiro é maior que o segundo. O programa deverá receber também um quarto número inteiro qualquer e, deve exibir os quatro números em ordem crescente. Atente para o caso em que o quarto número pode ser igual a um dos demais.

    Entradas:

    Três números inteiros informados em ordem crescente. Um número inteiro qualquer. Cada dado de entrada será fornecido em uma linha diferente.
    Saídas:

    Os quatro números inteiros informados exibidos em ordem crescente.
    Exemplo de entrada:

    3 
    6 
    9
    4
    Exemplo de saída:

    3 4 6 9
    Exemplo de Entrada:

    1
    5
    7
    11
    Exemplo de Saída:

    1 5 7 11
    Exemplo de Entrada:

    3
    6
    12
    2
    Exemplo de Saída:

    2 3 6 12
  */

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (d < a)
    cout << d << " " << a << " " << b << " " << c << endl;
  else if (d < b)
    cout << a << " " << d << " " << b << " " << c << endl;
  else if (d < c)
    cout << a << " " << b << " " << d << " " << c << endl;
  else
    cout << a << " " << b << " " << c << " " << d << endl;

  return 0;
}