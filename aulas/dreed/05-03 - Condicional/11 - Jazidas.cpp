#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream arquivoIn("jazida.txt");
  float d1, d2, d3, d4, d5, d6, d7;
  arquivoIn >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7;

  // Exibir o dia da semana em que houve a maior extração
  if (d1 > d2 and d1 > d3 and d1 > d4 and d1 > d5 and d1 > d6 and d1 > d7)
  {
    cout << "domingo" << endl;
    cout << d1 << endl;
  } else if (d2 > d1 and d2 > d3 and d2 > d4 and d2 > d5 and d2 > d6 and d2 > d7)
  {
    cout << "segunda-feira" << endl;
    cout << d2 << endl;
  } else if (d3 > d1 and d3 > d2 and d3 > d4 and d3 > d5 and d3 > d6 and d3 > d7)
  {
    cout << "terca-feira" << endl;
    cout << d3 << endl;
  } else if (d4 > d1 and d4 > d2 and d4 > d3 and d4 > d5 and d4 > d6 and d4 > d7)
  {
    cout << "quarta-feira" << endl;
    cout << d4 << endl;
  } else if (d5 > d1 and d5 > d2 and d5 > d3 and d5 > d4 and d5 > d6 and d5 > d7)
  {
    cout << "quinta-feira" << endl;
    cout << d5 << endl;
  } else if (d6 > d1 and d6 > d2 and d6 > d3 and d6 > d4 and d6 > d5 and d6 > d7)
  {
    cout << "sexta-feira" << endl;
    cout << d6 << endl;
  } else if (d7 > d1 and d7 > d2 and d7 > d3 and d7 > d4 and d7 > d5 and d7 > d6)
  {
    cout << "sabado" << endl;
    cout << d7 << endl;
  }

  return 0;
}