#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    Faça um programa que receba a idade e o peso de uma pessoa (uma informação em cada linha). De acordo com a relação a seguir, seu programa deverá verificar e exibir no dispositivo de saída padrão a qual grupo de risco essa pessoa se encaixa. Os grupos de risco são denotados por um número natural compreendido no intervalo [1,9].

    Idade (em anos)	Até 60 Kg	Entre 60 Kg e 90 Kg (inclusive)	Acima de 90 Kg
    Menores que 20	9	8	7
    De 20 a 50 (inclusive)	6	5	4
    Maiores que 50	3	2	1
    Entradas:

    Número inteiro que indica a idade de uma pessoa.
    Número em ponto flutuante que indica o peso de uma pessoa em quilogramas.
    Saídas:

    Número inteiro que indica o grupo de risco no qual a pessoa se encaixa.
    Exemplo de entrada:

    30
    80.0
    Exemplo de saída:

    5
    Exemplo de Entrada:

    50
    97.35
    Exemplo de Saída:

    4
  */

  int idade;
  cin >> idade;

  double peso;
  cin >> peso;

  if (idade < 20)
  {
    if (peso < 60)
    {
      cout << 9 << endl;
    }
    else if (peso <= 90)
    {
      cout << 8 << endl;
    }
    else
    {
      cout << 7 << endl;
    }
  }
  else if (idade <= 50)
  {
    if (peso < 60)
    {
      cout << 6 << endl;
    }
    else if (peso <= 90)
    {
      cout << 5 << endl;
    }
    else
    {
      cout << 4 << endl;
    }
  }
  else
  {
    if (peso < 60)
    {
      cout << 3 << endl;
    }
    else if (peso <= 90)
    {
      cout << 2 << endl;
    }
    else
    {
      cout << 1 << endl;
    }
  }

  return 0;
}