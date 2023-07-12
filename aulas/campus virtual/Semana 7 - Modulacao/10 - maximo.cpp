#include <iostream>
using namespace std;

double Maximo(double a, double b)
{
  if (a > b)
    return a;
  else
    return b;
}

int main()
{
  double num1, num2;
  cin >> num1 >> num2;
  cout << "Maior valor: " << Maximo(num1, num2) << endl;
  return 0;
}