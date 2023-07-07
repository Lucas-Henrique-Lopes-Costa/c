#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

struct Alunos
{
  char nome[20];
  int matricula;
  float nota[4];
  float media;
};

int main()
{
  cout << sizeof(Alunos) << endl;

  Alunos aluno[3];
  float soma;

  ifstream arq("dados.dat");
  ofstream saidaA("medias.txt");
  ofstream saidaB("dadosbin.dat");

  // recebendo os alunos
  for (int i = 0; i < 3; i++)
  {
    arq >> aluno[i].nome;
    arq >> aluno[i].matricula;

    soma = 0;

    for (int j = 0; j < 4; j++)
    {
      arq >> aluno[i].nota[j];
      soma += aluno[i].nota[j];
    }

    aluno[i].media = soma / 4;
  }
  
  // salvando dados em formato binário
  for (int i = 0; i < 3; i++)
  {
    saidaB.write((char *) &aluno[i], sizeof(Alunos));
    // (char *) => cast para char
    // &aluno[i] => endereço de memória do aluno
    // sizeof(Alunos) => tamanho do aluno    
  }

  // imprimindo alunos
  for (int i = 0; i < 3; i++)
  {
    saidaA << aluno[i].nome << " ";
    saidaA << aluno[i].media << endl;
  }

  return 0;
}