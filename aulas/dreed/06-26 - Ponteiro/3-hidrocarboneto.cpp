/*
Um hidrocarboneto é um composto químico formado por átomos de carbono e hidrogênio. Faça um programa que crie um registro chamado Hidrocarboneto contendo os campos inteiros C e H usados para guardar a quantidade de carbonos e hidrogênios, respectivamente, de um hidrocarboneto. No subprograma principal aloque dinamicamente um registro Hidrocarboneto e peça ao usuário as quantidades de carbono e hidrogênio do mesmo. Sabendo que massa molecular do carbono é 12 e do hidrogênio é 1, seu programa deverá calcular e exibir a massa molecular do composto.

Entradas:
Quantidade de carbonos do hidrocarboneto.
Quantidade de hidrogênios do hidrocarboneto.

Saídas:
Massa molecular do hidrocarboneto.

Exemplo de Entrada:
1 4

Exemplo de Saída:
16
*/
#include <iostream>
using namespace std;

struct Hidrocarbonetos
{
  int H;
  int C;
};

int main()
{
  Hidrocarbonetos *hidrocarboneto = new Hidrocarbonetos;

  cin >> hidrocarboneto->C >> hidrocarboneto->H;

  cout << (hidrocarboneto->C * 12) + (hidrocarboneto->H) << endl;

  return 0;
}