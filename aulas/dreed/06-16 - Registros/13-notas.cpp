/*
Faça um programa para ajudar a professora de AED I a obter as estatísticas das notas da terceira prova.

O programa deve ler a quantidade de alunos que fizeram a prova e os dados de cada aluno. Os dados dos alunos são: matrícula (string), nome (string), nota (inteiro, de 0 a 100) e devem ser armazenados em um registro. O programa deve calcular e exibir:

A média das notas;
A matrícula dos alunos que zeraram a prova;
A porcentagem dos alunos que ficaram abaixo da média das notas da turma;
O nome do aluno que tirou a maior nota.
Obs1.: Se nenhum aluno teve nota 0, nada deve ser impresso;

Obs2.:Em caso de empate da maior nota, considerar a primeira ocorrência;

Obs3.: Fique atento aos tipos dos dados!

Entradas:
Quantidade de alunos (inteiro);
Os dados de cada aluno: matrícula (string), nome (string), nota (inteiro)

Saídas:
A média das notas (real);
A matrícula dos alunos que zeraram a prova (string);
A porcentagem dos alunos que ficaram abaixo da média da turma (real);
O nome do aluno que tirou a maior nota.

Exemplo de Entrada:
6
20171 ana 60
20172 jose 80
20173 carlos 0
20174 luana 0
20175 mateus 50
20176 lucio 45

Exemplo de Saída:
39.1667
20173
20174
33.3333%
jose
*/

#include <iostream>
using namespace std;

struct Alunos
{
  string matricula;
  string nome;
  int nota;
  bool zerou;
};

int main()
{
  int numerosAlunos;
  cin >> numerosAlunos;

  Alunos alunos[numerosAlunos];

  int alunosZeraram = 0;
  int maiorNota = 0;
  int somaNotas = 0;
  for (int i = 0; i < numerosAlunos; i++)
  {
    cin >> alunos[i].matricula >> alunos[i].nome >> alunos[i].nota;
    somaNotas += alunos[i].nota;

    if (alunos[i].nota == 0)
    {
      alunosZeraram++;
      alunos[i].zerou = true;
    }
    else
    {
      alunos[i].zerou = false;
    }

    if (alunos[i].nota > maiorNota)
    {
      maiorNota = alunos[i].nota;
    }
  }

  float media = somaNotas / (float)numerosAlunos;

  int alunosAbaixoMedia = 0;
  
  for (int i = 0; i < numerosAlunos; i++)
  {
    if (alunos[i].nota < media)
    {
      alunosAbaixoMedia++;
    }
  }

  cout << media << endl;
  
  for (int i = 0; i < numerosAlunos; i++)
  {
    if (alunos[i].zerou)
    {
      cout << alunos[i].matricula << endl;
    }
  }

  cout << (alunosAbaixoMedia / (float)numerosAlunos) * 100 << "%" << endl;

  for (int i = 0; i < numerosAlunos; i++)
  {
    if (alunos[i].nota == maiorNota)
    {
      cout << alunos[i].nome << endl;
      break;
    }
  }

  return 0;
}