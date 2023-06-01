#include <iostream>
using namespace std;

double Maximo(double a, double b)
{
  return (a > b) ? a : b;
}

int main()
{
  double num1, num2;
  cin >> num1 >> num2;
  cout << "Maior valor: " << Maximo(num1, num2) << endl;
  return 0;
}