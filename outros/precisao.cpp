#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  system("clear||cls");

  float numero = 25;

  cout.precision(10);
  cout.setf(ios::fixed);

  cout << "A raiz de " << numero << " e o valor " << sqrt(numero) << endl;

  return 0;
}
