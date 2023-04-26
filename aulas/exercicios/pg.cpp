#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
  float ak, r, n, k;

  ifstream arquivoIn;

  arquivoIn.open("dados.txt");
  arquivoIn >> n >> k >> ak >> r;
  arquivoIn.close();

  float pg = ak * pow(r, (n - k));

  ofstream arquivoOut;
  arquivoOut.open("saida.txt");
  arquivoOut << pg<< endl;

  return 0;
}