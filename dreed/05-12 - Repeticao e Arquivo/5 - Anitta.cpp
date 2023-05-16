#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  ifstream arquivoIn("ingresso.txt");

  double valorIngresso, valorIngressoTotal;
  int diaCompraIngresso;
  char categoria; // (estudante (E) ou adulto (A))

  arquivoIn >> valorIngresso;

  while (arquivoIn >> diaCompraIngresso >> categoria)
  {
    double valorIndividual;

    if (diaCompraIngresso >= 14 and diaCompraIngresso <= 24)
    {
      if (categoria == 'E')
      {
        valorIndividual = valorIngresso * 0.9;
      }
      else
      {
        valorIndividual = valorIngresso * 0.95;
      }
    }
    else if (diaCompraIngresso >= 6 and diaCompraIngresso <= 13)
    {
      if (categoria == 'E')
      {
        valorIndividual = valorIngresso * 0.85;
      }
      else
      {
        valorIndividual = valorIngresso * 0.90;
      }
    }
    else
    {
      valorIndividual = valorIngresso;
    }

    valorIngressoTotal += valorIndividual;
  }

  cout << valorIngressoTotal << endl;

  return 0;
}
