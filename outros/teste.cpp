#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int cont = 0, soma = 0, dados, n;

  ifstream arquivoIn("entrada.txt");

  ofstream arquivoOut("saida.txt");

  if (arquivoIn)
  {
    while (arquivoIn >> dados) // será repetido enquanto for possível ter um valor
    {
      cout << dados << " ";
      soma += dados;
    }
    arquivoIn.close();
  }
  cout << soma << endl;

  return 0;
}