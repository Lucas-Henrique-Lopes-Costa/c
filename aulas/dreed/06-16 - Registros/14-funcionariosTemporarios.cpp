/*
Uma empresa contratou 3 funcionários temporários. De acordo com o valor das vendas mensais, os funcionários ganham pontos que determinarão seus salários ao final de cada mês. Sabe­-se que eles trabalharão nos meses de novembro de 2007 a janeiro de 2008. Leve em conta que cada 100.00 R$ equivalem a 1 ponto. Assuma que os pontos sempre serão representados por números inteiros.

Entradas:

Os nomes dos funcionários e suas respectivas vendas (número real) mensais.
Saídas:

Nome de cada funcionário e a pontuação total do mesmo considerando os três meses,
nome do funcionário com a maior pontuação,
valor total vendido por todos os funcionários nos três meses.
Exemplo de entrada:

Elder 2500.0 2800.0 3000.0
Sara 2000.0 4300.0 1500.0
Karen 1700.0 2300.0 4700.0
Exemplo de saída:

Elder 83
Sara 78
Karen 87
Karen
24800.0
*/
#include <iostream>
using namespace std;

struct Funcionarios
{
  string name;
  float salario1;
  float salario2;
  float salario3;
  float soma;
};

int main()
{
  Funcionarios pessoa[3];

  for (int i = 0; i < 3; i++)
  {
    float soma = 0;

    cin >> pessoa[i].name;

    cin >> pessoa[i].salario1;
    soma += pessoa[i].salario1;

    cin >> pessoa[i].salario2;
    soma += pessoa[i].salario2;

    cin >> pessoa[i].salario3;
    soma += pessoa[i].salario3;

    // fazendo a soma
    pessoa[i].soma = soma;
  }

  float maiorVendido = pessoa[0].soma;
  string nomeMaior = pessoa[0].name;
  for (int i = 0; i < 3; i++)
  {
    if (pessoa[i].soma > maiorVendido)
    {
      maiorVendido = pessoa[i].soma;
      nomeMaior = pessoa[i].name;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    cout << pessoa[i].name << " " << ((int)pessoa[i].soma / 100) << endl;
  }

  float soma = pessoa[0].soma + pessoa[1].soma + pessoa[2].soma;
  cout << nomeMaior << endl;
  cout << soma << endl;

  return 0;
}
