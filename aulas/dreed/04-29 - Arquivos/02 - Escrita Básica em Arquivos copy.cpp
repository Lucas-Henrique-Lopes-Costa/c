#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string arquivoName;
  cin >> arquivoName;

  string dados;
  cin >> dados;

  ofstream arquivoOut;
  arquivoOut.open(arquivoName);
  arquivoOut << dados << endl;

  return 0;
}