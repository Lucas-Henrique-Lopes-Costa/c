#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que receba o nome de dez clientes de um restaurante e armazene-os em um vetor. Em um segundo vetor, armazene a quantidade de refeições feitas por cada um dos dez clientes. Sabe-se que, a cada dez refeições, a refeição seguinte é grátis e sabe-se também que os clientes pagam cada refeição logo após consumirem.

    Faça então um programa que mostre o nome de todos os clientes, com a quantidade de refeições que eles efetivamente pagaram.

    Entrada:

    Dez nomes de clientes.
    Dez quantidades de refeições dos clientes.
    Saída:

    Sequência com o nome de cada cliente e a quantidade de refeições que eles precisarão pagar.
    Exemplo de entrada:

    Ana Andre Bruno Carlos Diego Fabiana Gabriela Jaime Livia Maria
    45 30 19 28 43 59 100 8 10 12
    Exemplo de saída:

    Ana 41
    Andre 28
    Bruno 18
    Carlos 26
    Diego 40
    Fabiana 54
    Gabriela 91
    Jaime 8
    Livia 10
    Maria 11
  */

  string nomes[10];

  for (int i = 0; i < 10; i++)
  {
    cin >> nomes[i];
  }

  int refeicoes[10];

  for (int i = 0; i < 10; i++)
  {
    cin >> refeicoes[i];
  }

  for (int i = 0; i < 10; i++)
  {
    cout << nomes[i] << " " << refeicoes[i] - (refeicoes[i] / 11) << endl;
  }

  return 0;
}