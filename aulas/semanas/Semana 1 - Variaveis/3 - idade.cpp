#include <iostream>

using namespace std;

int main()
{
  system("clear||cls");

  int idade, meses, semanas, dias;

  cout << "Qual a idade? ";
  cin >> idade;

  meses = idade * 12;
  semanas = idade * 48;
  dias = meses * 30;

  cout << "Essa pessoa tem: " << meses << " meses." << " Semanas: " << semanas << " Dias: " << dias << endl;

  return 0;
}