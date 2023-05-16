#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream arquivoInA("arquivoA.txt");
  ifstream arquivoInB("arquivoB.txt");
  ofstream arquivoOut("arquivoC.txt");

  string A, B;
  int cont = 0;

  while (arquivoInA >> A and arquivoInB >> B)
  {
    if (cont == 0)
    {
      arquivoOut << A << " " << B;
      cont++;
    }
    else
    {
      arquivoOut << " " << A << " " << B;
    }
  }

  while (arquivoInA >> A) {
    arquivoOut << A << " ";
  }

  while (arquivoInB >> B) {
    arquivoOut << B << " ";
  }

  arquivoInA.close();
  arquivoInB.close();
  arquivoOut.close();

  return 0;
}