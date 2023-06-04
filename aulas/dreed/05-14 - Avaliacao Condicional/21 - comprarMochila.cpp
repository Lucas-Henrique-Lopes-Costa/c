#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Um aluno decide comprar uma mochila nova, com isso sua mãe decide ajudar na compra, pagando 20% do valor da mochila, porém ela disse que se esses 20% ultrapassarem 30 reais ele não poderia comprar a mochila.

    Faça um programa que leia o valor da mochila (número real) e depois escreva "sim" ou "nao" (note a ausência de acento), indicando se o aluno pode comprar a mochila, seguido do valor que a mãe teria que pagar. O valor a ser pago deverá ser expresso utilizando duas casas decimais (use fixed e setprecision()).

    Exemplo de Entrada:

    159
    Exemplo de Saída:

    nao 31.80
  */

  float valorMochila;
  cin >> valorMochila;

  float valorMae = valorMochila * 0.2;

  if (valorMae > 30)
  {
    cout << "nao " << fixed << setprecision(2) << valorMae << endl;
  }
  else
  {
    cout << "sim " << fixed << setprecision(2) << valorMae << endl;
  }

  return 0;
}