/*
Faça um programa que lê os dados (nome e data de nascimento) de n pessoas, e que exiba o nome da pessoa mais velha. Em caso de empate, a resposta deve ser a pessoa que apareceu antes na entrada dos dados.

Cada pessoa deverá ser representada por um registro, sendo que a data de nascimento deverá ser representada por um outro registro com dia, mês e ano.

Obs.: Registros em Python são implementados como dicionários

Entrada:
A quantidade de pessoas que serão lidas (um número inteiro).
Os dados de cada pessoa (nome, dia de nascimento, mês de nascimento e ano de nascimento). Os nomes não terão caracteres brancos, e os dados serão lidos na mesma linha.

Saída:
O nome da pessoa mais velha

Exemplo de entrada:
4
Joao 4 12 1990
Jose 31 1 1991
Chico 20 6 1989
Maria 20 4 1991

Exemplo de saída:
Chico
*/

#include <iostream>
using namespace std;

struct Data
{
  int dia;
  int mes;
  int ano;
};

struct Pessoa
{
  string nome;
  Data dataNascimento;
};

int main()
{
  int n;
  cin >> n;

  Pessoa pessoas[n];

  for (int i = 0; i < n; i++)
  {
    cin >> pessoas[i].nome >> pessoas[i].dataNascimento.dia >> pessoas[i].dataNascimento.mes >> pessoas[i].dataNascimento.ano;
  }

  int maior = 0;
  for (int i = 1; i < n; i++)
  {
    // compara o ano
    if (pessoas[i].dataNascimento.ano < pessoas[maior].dataNascimento.ano)
    {
      maior = i;
    }
    else if (pessoas[i].dataNascimento.ano == pessoas[maior].dataNascimento.ano)
    {
      // compara o mes
      if (pessoas[i].dataNascimento.mes < pessoas[maior].dataNascimento.mes)
      {
        maior = i;
      }
      else if (pessoas[i].dataNascimento.mes == pessoas[maior].dataNascimento.mes)
      {
        // compara o dia
        if (pessoas[i].dataNascimento.dia < pessoas[maior].dataNascimento.dia)
        {
          maior = i;
        }
      }
    }
  }

  cout << pessoas[maior].nome << endl;

  return 0;
}