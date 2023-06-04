#include <iostream>

using namespace std;

int main()
{
  enum diasUteis
  {
    segunda = 2,
    terca,
    quarta,
    quinta,
    sexta
  };

  int dia;
  cin >> dia;
  if (dia == segunda)
    cout << "Segunda e dia de praticar algoritmos" << endl;
  else if (dia == terca)
    cout << "Terça e dia de praticar algoritmos" << endl;
  else if (dia == quarta)
    cout << "Quarta e dia de praticar algoritmos" << endl;
  else if (dia == quinta)
    cout << "Quinta e dia de praticar algoritmos" << endl;
  else if (dia == sexta)
    cout << "Sexta e dia de praticar algoritmos" << endl;
  else
    cout << "Não é dia útil? Ótimo para praticar algoritmos!" << endl;

  return 0;
}