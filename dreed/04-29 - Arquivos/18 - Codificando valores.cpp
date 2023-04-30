#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int valor;
  cin >> valor;

  int p1, p2, p3;
  ifstream arquivoIn("chaves.txt");
  arquivoIn >> p1 >> p2 >> p3;

  ofstream arquivoOut("codigo.txt");
  arquivoOut << valor % p1 << endl;
  arquivoOut << valor % p2 << endl;
  arquivoOut << valor % p3 << endl;

  return 0;
}
