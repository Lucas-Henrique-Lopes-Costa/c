#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  ifstream arquivoIn("entrada.txt");
  int area;
  arquivoIn >> area;
  float valorGalao;
  arquivoIn >> valorGalao;

  ofstream arquivoOut("saida.txt");
  arquivoOut << ceil((area / 3.0/18)) << endl;
  arquivoOut << fixed << setprecision(2) << ceil((area / 3.0/18)) * valorGalao << endl;

  return 0;
}
