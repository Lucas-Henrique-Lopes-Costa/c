#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float valor;
  ifstream arquivoIn("valor.txt");
  arquivoIn >> valor;

  float aVista = valor * 0.92;
  float prestacao = valor / 4;
  float prestacaoJuros = valor * 1.1 / 10;

  ofstream arquivoOut("opcoes.txt");
  arquivoOut << fixed << setprecision(2) << aVista << endl;
  arquivoOut << fixed << setprecision(2) << prestacao << endl;
  arquivoOut << fixed << setprecision(2) << prestacaoJuros << endl;

  return 0;
}
