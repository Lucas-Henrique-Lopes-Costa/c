#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float entrada, valor;
  ifstream arquivoIn("entrada.txt");
  arquivoIn >> entrada >> valor;

  float saldo = entrada - valor;

  int nota20 = saldo / 20;
  int nota10 = (saldo - nota20 * 20) / 10;
  int nota5 = (saldo - nota20 * 20 - nota10 * 10) / 5;
  int nota2 = (saldo - nota20 * 20 - nota10 * 10 - nota5 * 5) / 2;
  int nota1 = (saldo - nota20 * 20 - nota10 * 10 - nota5 * 5 - nota2 * 2);

  ofstream arquivoOut("saida.txt");
  arquivoOut << nota20 << endl;
  arquivoOut << nota10 << endl;
  arquivoOut << nota5 << endl;
  arquivoOut << nota2 << endl;
  arquivoOut << nota1 << endl;

  return 0;
}
