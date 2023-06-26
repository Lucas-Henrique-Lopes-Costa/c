/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre salário, idade e número de filhos. Faça um programa que leia esses dados de várias pessoas, calcule e escreva: média de salário da população, média do número de filhos, maior salário e o percentual de pessoas com salário superior a R$ 1000,00.

Os dados de pessoas devem ser armazenados em registros com salário, idade e número de filhos.

Entradas:
Número de pessoas entrevistadas.
Os dados de cada pessoa (3 números numa mesma linha):
salário (número real),
idade (número inteiro) e
número de filhos (número inteiro).

Saídas:
Média de salário da população (número real);
média do número de filhos (número real);
o maior salário (número real);
o percentual de pessoas com salário superior a R$ 1000,00 (número inteiro entre 0 e 100, resultado do arredondamento do valor para o inteiro mais próximo, seguido imediatamente pelo caractere de porcentagem). Soluções em C++ podem utilizar a função round da biblioteca cmath.

Exemplo de entrada:
6
2000.00 47 3
1250.00 22 1
3750.00 29 2
819.00 31 4
900.00 25 5
1000.01 23 2

Exemplo de saída:
1619.83
2.83333
3750
67%
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Familias
{
  double salario;
  int idade;
  int filhos;
};

int main()
{
  int n;
  cin >> n;

  Familias familias[n];

  double mediaSalario = 0;
  double mediaFilhos = 0;
  double maiorSalario = 0;
  int percentualSuperior1000 = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> familias[i].salario >> familias[i].idade >> familias[i].filhos;

    mediaSalario += familias[i].salario;
    mediaFilhos += familias[i].filhos;

    if (familias[i].salario > maiorSalario)
    {
      maiorSalario = familias[i].salario;
    }

    if (familias[i].salario > 1000)
    {
      percentualSuperior1000++;
    }
  }

  mediaSalario /= n;
  mediaFilhos /= n;
  percentualSuperior1000 = (percentualSuperior1000 * 100) / n;

  cout << mediaSalario << endl;
  cout << mediaFilhos << endl;
  cout << maiorSalario << endl;
  cout << fixed << setprecision(0) << percentualSuperior1000 << "%" << endl;

  return 0;
}
