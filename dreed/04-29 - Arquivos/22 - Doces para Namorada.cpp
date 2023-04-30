#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float valorGasto;
  cin >> valorGasto;

  int chocolate = valorGasto / 13.50;
  int trufa = (valorGasto - chocolate * 13.50) / 2.50;
  int jujuba = (valorGasto - chocolate * 13.50 - trufa * 2.5) / 1.50;
  int drops = (valorGasto - chocolate * 13.50 - trufa * 2.5 - jujuba * 1.50) / 1.00;
  int bala = (valorGasto - chocolate * 13.50 - trufa * 2.5 - jujuba * 1.50 - drops * 1.00) / 0.25;

  ofstream arquivoOut("doces.txt");
  arquivoOut << fixed << setprecision(2) << valorGasto << endl;
  arquivoOut << chocolate << endl;
  arquivoOut << trufa << endl;
  arquivoOut << jujuba << endl;
  arquivoOut << drops << endl;
  arquivoOut << bala << endl;

  return 0;
}
