#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int valor1 = 20, valor2 = 10, valor3 = 5;

  if (!valor1 or valor2 or (valor3 == 5))
  {
    cout << valor3 << endl;
  }
  else
  {
    cout << valor2 + valor1 << endl;
  }
  return 0;
}