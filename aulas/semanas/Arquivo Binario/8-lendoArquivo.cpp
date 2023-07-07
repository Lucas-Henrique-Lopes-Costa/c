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
  Alunos aluno[3];
  ifstream arq("dados.dat");
  
  arq.read((char *) &aluno[0], sizeof(Alunos) * 3);

  for (int i = 0; i < 3; i++)
  {
    cout << aluno[i].nome << " ";
    cout << aluno[i].media << endl;
  }

  return 0;
}