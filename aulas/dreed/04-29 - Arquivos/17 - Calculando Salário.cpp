#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

  float valorBase, gratificacao, imposto;
  cin >> valorBase >> gratificacao >> imposto;

  ofstream arquivoOut("holerite.txt");
  arquivoOut << fixed << setprecision(2) << valorBase + gratificacao << endl;
  arquivoOut << fixed << setprecision(2) << (valorBase + gratificacao) * imposto / 100 << endl;
  arquivoOut << fixed << setprecision(2) << valorBase + gratificacao - ((valorBase + gratificacao) * imposto / 100) << endl;

  return 0;
}
