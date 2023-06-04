#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float coo;
  cin >> coo;

  int graus = coo;
  int minutos = (coo - graus) * 60;
  int segundos = (((coo - graus) * 60) - minutos) * 60;

  ofstream arquivoOut("coordenadas.txt");
  arquivoOut << graus << endl;
  arquivoOut << minutos << endl;
  arquivoOut << segundos << endl;

  return 0;
}
