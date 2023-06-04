#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

  float salario, cheque1, chegue2, saldo;
  ifstream arquivoIn("entrada.txt");

  arquivoIn >> salario >> cheque1 >> chegue2;

  saldo = salario - (cheque1 * 1.0038) - (chegue2 * 1.0038);
  cout << saldo << endl;

  return 0;
}
