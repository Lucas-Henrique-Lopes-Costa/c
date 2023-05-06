#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream arquivoIn("investigacao.txt");
  string nome1, nome2, nome3;
  string resposta1, resposta2, resposta3, resposta4, resposta5;
  arquivoIn >> nome1 >> nome2 >> nome3 >> resposta1 >> resposta2 >> resposta3 >> resposta4 >> resposta5;

  int cont = 0;
  if (resposta1 == "sim")
    cont++;
  if (resposta2 == "sim")
    cont++;
  if (resposta3 == "sim")
    cont++;
  if (resposta4 == "sim")
    cont++;
  if (resposta5 == "sim")
    cont++;

  if (cont == 2)
    cout << nome1 << endl;
  else if (cont == 3 || cont == 4)
    cout << nome2 << endl;
  else if (cont == 5)
    cout << nome3 << endl;
  else
    cout << nome1 << " " << nome2 << " " << nome3 << endl;

  return 0;
}