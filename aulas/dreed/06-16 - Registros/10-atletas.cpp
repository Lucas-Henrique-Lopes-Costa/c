/*
Crie um registro representando um atleta. Esse registro deve conter o nome do atleta, seu esporte, idade e altura. Em seguida, escreva um programa que leia os dados de cinco atletas, armazenando as informações em um vetor. Calcule e exiba os nomes e os esportes do atleta mais alto e do mais velho.

Entradas:
Os dados de cada atleta em cada linha, sendo eles:
nome (sem espaços),
esporte (sem espaços),
idade (número inteiro) e
altura (número real).

Saídas:
Nome e esporte do atleta mais alto.
Nome e esporte do atleta mais velho.

Exemplo de Entrada:
Joao	Futebol		28		1.60
Maria	Volei		31		1.82
Pedro	Basquete	22		1.95
Jairo	Tenis		30		1.76
Tiago	Tenis		29		1.77

Exemplo de Saída:
Pedro	Basquete
Maria	Volei
*/

#include <iostream>
using namespace std;

struct Atletas
{
  string nome;
  string esporte;
  int idade;
  float altura;
};

int main()
{
  Atletas atleta[5];

  float maisAlto = 0;
  string nomeMaisAlto;
  string esporteMaisAlto;

  int maisVelho = 0;
  string nomeMaisVelho;
  string esporteMaisVelho;

  for (int i = 0; i < 5; i++)
  {
    cin >> atleta[i].nome >> atleta[i].esporte >> atleta[i].idade >> atleta[i].altura;
    if (atleta[i].idade > maisVelho)
    {
      maisVelho = atleta[i].idade;
      nomeMaisVelho = atleta[i].nome;
      esporteMaisVelho = atleta[i].esporte;
    }

    if (atleta[i].altura > maisAlto)
    {
      maisAlto = atleta[i].altura;
      nomeMaisAlto = atleta[i].nome;
      esporteMaisAlto = atleta[i].esporte;
    }
  }

  cout << nomeMaisAlto << "	" << esporteMaisAlto << endl;
  cout << nomeMaisVelho << "	" << esporteMaisVelho;

  return 0;
}
