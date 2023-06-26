/*
O professor Renato (Chefe do Departamento) resolveu organizar uma festa de São João no Departamento de Ciência da Computação da UFLA. Ele enviou um email informando que cada professor deverá trazer dois alimentos (bebidas ou comidas). A quantidade de cada alimento deverá ser definido pelo professor. Faça um programa que leia o nome de cada professor e o nome dos dois alimentos e suas respectivas quantidades, além de uma lista dos alimentos e quantidades necessárias para a realização da festa. O programa deverá gerar uma lista com o nome de todos os alimentos e as quantidades que faltaram ou sobraram para completar a lista. Obs: Os nomes dos professores e alimentos não possuem espaço. A ordem de impressão dos alimentos deverá ser a mesma ordem de entrada.

Entradas:
O número de alimentos necessários para a festa.
O nome e a quantidade de cada alimento necessário para a festa.
O número de professores que irão participar da festa.
Dados dos alimentos trazidos por cada professor:
nome do professor,
nome do 1º alimento,
quantidade do 1º alimento,
nome do 2º alimento,
quantidade do 2º alimento.

Saídas:
Lista de alimentos e as quantidades que sobraram ou faltaram para completar a lista. Seguindo a ordem de entrada dos alimentos.

Exemplo de Entrada:
6
rapadura 1
quentao 6
pinhao 2
pipoca 2
caldinho 4
suco 7
5
Joaquim rapadura 2 quentao 3
Raphael pinhao 5 pipoca 2
Julio caldinho 3 suco 6
Bruno caldinho 1 quentao 2
Tales pinhao 1 rapadura 3

Exemplo de Saída:
rapadura -4
quentao 1
pinhao -4
pipoca 0
caldinho 0
suco 1
*/

#include <iostream>
using namespace std;

struct Alimento
{
  string nome;
  int quantidade;
  int quantidadeDada;
};

int main()
{
  int nAlimentos;
  cin >> nAlimentos;

  Alimento alimento[nAlimentos];
  
  for (int i = 0; i < nAlimentos; i++)
  {
    cin >> alimento[i].nome >> alimento[i].quantidade;
    alimento[i].quantidadeDada = 0;
  }

  int nProfessores;
  cin >> nProfessores;

  for (int i = 0; i < nProfessores; i++)
  {
    string nomeProfessor;
    cin >> nomeProfessor;

    string nomeAlimento1;
    int quantidadeAlimento1;
    cin >> nomeAlimento1 >> quantidadeAlimento1;

    for (int j = 0; j < nAlimentos; j++)
    {
      if (alimento[j].nome == nomeAlimento1)
      {
        alimento[j].quantidadeDada += quantidadeAlimento1;
      }
    }

    string nomeAlimento2;
    int quantidadeAlimento2;
    cin >> nomeAlimento2 >> quantidadeAlimento2;

    for (int j = 0; j < nAlimentos; j++)
    {
      if (alimento[j].nome == nomeAlimento2)
      {
        alimento[j].quantidadeDada += quantidadeAlimento2;
      }
    }
  }

  for (int i = 0; i < nAlimentos; i++)
  {
    cout << alimento[i].nome << " " << alimento[i].quantidade - alimento[i].quantidadeDada << endl;
  }

  return 0;
}