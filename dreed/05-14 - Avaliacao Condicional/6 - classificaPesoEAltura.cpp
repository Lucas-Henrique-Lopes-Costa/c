#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    Faça um programa que receba o peso e a altura de uma pessoa. De acordo com a tabela a seguir, verifique e mostre a classificação dessa pessoa.

    Altura	Peso
    Abaixo de 60Kg	Entre 60Kg e 90Kg (inclusive)	Acima de 90Kg
    Menores que 1,20m	A	D	G
    De 1,20m a 1,70m (inclusive)	B	E	H
    Maiores que 1,70m	C	F	I
    Entradas:

    Peso e altura do indivíduo (em ponto flutuante)
    Saídas:

    Classificação do indivíduo (um caracter)
    Exemplo de entrada:
    54.2
    1.56
    Exemplo de saída:
    B
    Exemplo de Entrada:

    90
    1.83
    Exemplo de Saída:

    F
  */

  double peso;
  cin >> peso;

  double altura;
  cin >> altura;

  if (peso < 60)
  {
    if (altura < 1.2)
    {
      cout << "A" << endl;
    }
    else if (altura <= 1.7)
    {
      cout << "B" << endl;
    }
    else
    {
      cout << "C" << endl;
    }
  }
  else if (peso <= 90)
  {
    if (altura < 1.2)
    {
      cout << "D" << endl;
    }
    else if (altura <= 1.7)
    {
      cout << "E" << endl;
    }
    else
    {
      cout << "F" << endl;
    }
  }
  else
  {
    if (altura < 1.2)
    {
      cout << "G" << endl;
    }
    else if (altura <= 1.7)
    {
      cout << "H" << endl;
    }
    else
    {
      cout << "I" << endl;
    }
  }

  return 0;
}