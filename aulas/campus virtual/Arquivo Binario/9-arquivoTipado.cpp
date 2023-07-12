#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
using namespace std;

// geração de dados aleatórios
static const char alpha[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

static const char alphanum[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789"
    "!@#$%¨&*()_+{}[]:;?/|<>,.~^`";

// excluindo caracter de términio de string
const int alphaLength = sizeof(alpha) - 1;
const int alphaNumLength = sizeof(alphanum) - 1;

char geraAlpha()
{
  return alpha[rand() % alphaLength];
}

char geraAlphaNum()
{
  return alphanum[(rand() % alphaNumLength)];
}

struct Dado
{
private:
  int chave1;
  int chave2;
  float valor1;
  char campo1[5];
  char campo2[20];
  char lixo[500];

public:
  void preenchendoDado(int k)
  {
    chave1 = k;                                   // preenche o dado com valores aleatórios
    chave2 = rand();                              // gera um número aleatório entre 0 a 1
    valor1 = ((float)rand()) / ((float)RAND_MAX); // um inteiro dividido por outro inteiro gera um inteiro maior

    campo1[0] = geraAlpha();
    campo2[1] = geraAlpha();

    for (int i = 1; i < 5; i++)
      campo1[i] = geraAlphaNum();

    for (int i = 1; i < 20; i++)
      campo2[i] = geraAlphaNum();

    for (int i = 0; i < 499; i++)
      lixo[i] = rand();
  }
};

int main(int arqc, char *arqv[])
{
  if (arqc != 3)
  {
    cerr << "Uso: " << endl;
    cerr << arqv[0] << " arquivo quantidade" << endl;

    exit(-1);
  }

  ofstream saida(arqv[1]);
  int qtdade = atoi(arqv[2]);

  srand(time(NULL)); // inicializa a semente de números aleatórios
  Dado *ptrDado;

  for (int i = 0; i < qtdade; i++)
  {
    ptrDado = new Dado;                                 // aloca memória para um dado
    ptrDado->preenchendoDado(2 * qtdade - 2 * i);       // preenche o dado
    saida.write((const char *)(ptrDado), sizeof(Dado)); // escreve o dado no arquivo
    delete ptrDado;
  }

  saida.close();
  return 0;
}