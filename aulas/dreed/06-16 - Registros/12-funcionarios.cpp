/*
Faça um algoritmo que leia informações de 5 funcionários. O algoritmo deve pesquisar um determinado funcionário pelo número de matrícula utilizando o método binário e apresentar o nome do mesmo. Considere, para isso, que as entradas já foram inseridas de forma ordenada pelo número de matrícula. Também deverá apresentar de forma ordenada (crescente, por salário) os registros dos empregados que recebem salários iguais ou superior a um determinado valor.

Entradas:
Os dados de cada funcionário:
matrícula (número inteiro),
nome,
salário (número real) e
Matrícula a ser pesquisada,
Salário a ser pesquisado.

Saídas:
Nome do funcionário correspondente a matrícula a ser pesquisada,
lista com nomes dos funcionários com salários superiores ao salário a ser pesquisado.

Exemplo de entrada:
200
Michel
3000
201
Anderson
2850
202
Fernanda
2600
203
Marcia
2900
204
Pablo
3500
202
2900

Exemplo de saída:
Fernanda
Marcia
Michel
Pablo
*/

#include <iostream>
using namespace std;

struct Funcionarios
{
  int matricula;
  string nome;
  float salario;
};

int main()
{
  Funcionarios funcionario[5];

  for (int i = 0; i < 5; i++)
  {
    cin >> funcionario[i].matricula >> funcionario[i].nome >> funcionario[i].salario;
  }

  int matricula;
  cin >> matricula;

  float salario;
  cin >> salario;

  for (int i = 0; i < 5; i++)
  {
    if (matricula == funcionario[i].matricula)
    {
      cout << funcionario[i].nome << endl;
    }
  }

  string nomeMaior[5];
  float salariosMaior[5];
  int cont = 0;
  for (int i = 0; i < 5; i++)
  {
    if (salario <= funcionario[i].salario)
    {
      nomeMaior[cont] = funcionario[i].nome;
      salariosMaior[cont] = funcionario[i].salario;

      cont++;
    }
  }

  // ordenando vetor
  for (int j = 0; j < cont; j++)
  {
    for (int k = 0; k < cont; k++)
    {
      // cout << "comparando: " << salariosMaior[j] << " - " << nomeMaior[j] << " com " << salariosMaior[k] << " - " << nomeMaior[k] << endl;
      if (salariosMaior[j] < salariosMaior[k])
      {
        // cout << "achei" << endl;

        int auxSalario = salariosMaior[j];
        salariosMaior[j] = salariosMaior[k];
        salariosMaior[k] = auxSalario;

        string auxNome = nomeMaior[j];
        nomeMaior[j] = nomeMaior[k];
        nomeMaior[k] = auxNome;

        // cout << "Vetor Nome:" << endl;
        // for (int f = 0; f < cont; f++)
        // {
        //   cout << nomeMaior[f] << endl;
        // }
        
      }
    }
  }

  for (int i = 0; i < cont; i++)
  {
    cout << nomeMaior[i] << endl;
  }

  return 0;
}
