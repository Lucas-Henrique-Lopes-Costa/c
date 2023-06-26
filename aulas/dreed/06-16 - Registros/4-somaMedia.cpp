/*
Faça um programa para calcular a média de notas de uma determinada turma. Faça um registro para guardar as informações do aluno, onde irá receber o número de matrícula (inteiro), nome, 2 notas de 0 - 10(float) e o sexo(M - Masculino ou F - Feminino). Primeiro o programa deve solicitar o número de alunos e depois as informações de cada aluno. A saída do programa deve ter a média geral das notas, a média das pessoas do sexo masculino e a média das pessoas do sexo feminino.

Entradas:
Número inteiro de alunos.
Número de matrícula(inteiro), nome, 2 notas(float) e sexo(char).

Saídas:
Média geral dos alunos.
Média das pessoas do sexo masculino.
Média das pessoas do sexo feminino.

Exemplo de Entrada:
3
1 amanda 5 10 F
2 flavio 2.5 9.1 M
3 renato 8.4 5.1 M

Exemplo de Saída:
6.68
6.275
7.5
*/

#include <iostream>
using namespace std;

struct Alunos
{
  int matricula;
  string nome;
  float nota1;
  float nota2;
  char sexo;
};

int main()
{
  int n;
  cin >> n;

  Alunos aluno[n];

  float somaGeral = 0;
  float somaHomem = 0;
  int contHomem = 0;
  float somaMulher = 0;
  int contMulher = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> aluno[i].matricula >> aluno[i].nome >> aluno[i].nota1 >> aluno[i].nota2 >> aluno[i].sexo;

    somaGeral += aluno[i].nota1 + aluno[i].nota2;

    if (aluno[i].sexo == 'M')
    {
      somaHomem += aluno[i].nota1 + aluno[i].nota2;
      contHomem++;
    }
    else
    {
      somaMulher += aluno[i].nota1 + aluno[i].nota2;
      contMulher++;
    }
  }

  cout << somaGeral / (n * 2) << endl;
  cout << somaHomem / (contHomem * 2) << endl;
  cout << somaMulher / (contMulher * 2) << endl;

  return 0;
}