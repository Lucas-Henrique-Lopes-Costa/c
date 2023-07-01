/*
Considere que um nutricionista armazena algumas informações sobre seus pacientes (nome, sexo, altura (m) e peso (kg)). Crie um programa que lê a quantidade de pacientes e suas respectivas informações (deve ser usado um registro para representar os pacientes). Depois, escreva as saídas descritas abaixo, sabendo que o cálculo de peso ideal é:

Homens: 72.7 * altura - 58
Mulheres: 62.1 * altura - 44.7
Entradas:

A quantidade de pacientes.
Os dados de cada paciente:
nome (sem espaços),
sexo (a letra M ou H),
altura (número real) e
peso (número real) e
Saídas:

Nome da pessoa mais pesada,
nome das pessoas que estão acima do peso ideal e quanto deverão perder de peso,
Exemplo de entrada:

3
Sergio H 1.68 68
Lais M 1.76 61
Jose H 1.58 79
Exemplo de saída:

Jose
Sergio ­-3.864
Jose ­-22.134
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Pacientes
{
  string nome;
  char sexo;
  double altura;
  double peso;
};

int main()
{
  int n;
  cin >> n;
  Pacientes paciente[n];

  double maisPesado = 0;
  string nomeMaisPesado;
  for (int i = 0; i < n; i++)
  {
    cin >> paciente[i].nome >> paciente[i].sexo >> paciente[i].altura >> paciente[i].peso;
    if (paciente[i].peso > maisPesado)
    {
      maisPesado = paciente[i].peso;
      nomeMaisPesado = paciente[i].nome;
    }
  }

  cout << nomeMaisPesado << endl;

  // peso ideal
  for (int i = 0; i < n; i++)
  {
    double pesoIdeal;
    if (paciente[i].sexo == 'H')
    {
      pesoIdeal = 72.7 * paciente[i].altura - 58;
    }
    else
    {
      pesoIdeal = 62.1 * paciente[i].altura - 44.7;
    }

    if (paciente[i].peso > pesoIdeal)
    {
      cout << paciente[i].nome << " -" << paciente[i].peso - pesoIdeal << endl;
    }
  }

  return 0;
}