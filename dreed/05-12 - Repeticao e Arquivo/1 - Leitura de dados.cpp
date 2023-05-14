#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int vezes, cont = 0;

  ifstream arquivoIn("entrada.txt");
  arquivoIn >> vezes;

  ofstream arquivoOut("saida.txt");

  while (cont < vezes)
  {
    string nome;
    float n1, n2;

    arquivoIn >> nome >> n1 >> n2;

    float media = (n1 + n2) / 2.0;

    if (media < 7.0)
    {
      arquivoOut << nome << endl;
    }

    cont++;
  }

  return 0;
}