#include <iostream>
using namespace std;

int transformaDias(int anos, int meses, int dias)
{
  return (anos * 365) + (meses * 30) + dias;
}

int main()
{
  // Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.

  int anos, meses, dias;
  cout << "Digite a idade em anos, meses e dias: ";
  cin >> anos >> meses >> dias;

  cout << "Idade em dias: " << transformaDias(anos, meses, dias) << endl;

  return 0;
}