#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream arquivoIn("dados.dat");
  float soma = 0.0;
  int num = 0;

  float valor;

  if (arquivoIn)
  {
    while (arquivoIn >> valor)
    {
      soma += valor;
      num++;
    }
    cout << "Media: " << soma / num << endl;
  }
  else
  {
    cout << "Arquivo nao encontrado!" << endl;
  }

}