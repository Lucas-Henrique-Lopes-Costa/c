#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

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
  void print(bool imprimeLixo = false)
  {
    // Strings auxiliares para impressão, pois o campo1 e campo2 não são terminados em \0
    char campo1String[6];
    char campo2String[21];
    char lixoString[501];

    // Não posso usar o strcpy, pois ele não garante que o destino será terminado em \0
    // A solução é usar o strncpy, que copia no máximo N caracteres
    strncpy(campo1String, campo1, 5);
    strncpy(campo2String, campo2, 20);
    strncpy(lixoString, lixo, 500);

    // Garante que as strings estarão terminadas em \0
    campo1String[5] = '\0';
    campo2String[20] = '\0';
    lixoString[500] = '\0';

    cout << chave1 << " " << chave2 << " " << valor1 << endl;
    cout << campo1String << " " << campo2String << endl;

    if (imprimeLixo)
      cout << lixoString << endl;

    cout << endl;
  }
};

int main(int arqc, char *arqv[])
{
  if (arqc != 2)
  {
    cerr << "Uso: " << endl;
    cerr << arqv[0] << " arquivo" << endl;

    exit(-1);
  }

  ifstream entrada(arqv[1], ios::binary);

  Dado d;
  Dado *ptrDados = &d;
  while (entrada.read((char *)ptrDados, sizeof(Dado)))
  {
    ptrDados->print();
  }

  entrada.close();

  return 0;
}