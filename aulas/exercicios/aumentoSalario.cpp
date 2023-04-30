#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  float salarioAnterior, novoSalario;

  cin >> salarioAnterior;

  if (salarioAnterior > 900)
  {
    novoSalario = salarioAnterior;
  }
  else if (salarioAnterior > 600)
  {
    novoSalario = salarioAnterior * 1.05;
  }
  else if (salarioAnterior > 300)
  {
    novoSalario = salarioAnterior * 1.1;
  }
  else
  {
    novoSalario = salarioAnterior * 1.15;
  }

  cout << fixed << setprecision(2) << novoSalario << endl;

  return 0;
}