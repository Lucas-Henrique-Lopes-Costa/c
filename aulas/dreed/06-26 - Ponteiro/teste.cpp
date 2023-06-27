#include <iostream>
#include <fstream>
using namespace std;

struct carros
{
  string nome;
  int ano;
  double consumo;
  double km;
};

void escreverCarroNoArquivo(carros *c)
{
  ofstream escrita("saida.txt");
  if (escrita)
  {
    escrita << c[0].nome << endl;
    escrita << c[0].ano << endl;
    escrita << c[0].km << endl;
    escrita << c[0].consumo / c[0].km << endl;
  }
}

int main()
{
  ifstream leitura("entrada.txt");
  carros *c = new carros[1];

  if (leitura)
  {
    leitura >> c[0].nome;
    leitura >> c[0].ano;
    leitura >> c[0].consumo;
    leitura >> c[0].km;
  }

  escreverCarroNoArquivo(c);

  return 0;
}