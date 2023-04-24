#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  system("clear||cls");

  cout.precision(2);
  cout.setf(ios::fixed);

  int a, b, c;

  cout << "Quais os valores do lado do triangulo: ";
  cin >> a >> b >> c;

  float p = float((a + b + c)) / 2;

  float area = sqrt(p*(p-a)*(p-b)*(p-c));

  cout << area << endl;

  return 0;
}
