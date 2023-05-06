#include <iostream>

using namespace std;

int main()
{
  int x1, x2, faltando, volta = 1;

  cin >> x1 >> x2;

  faltando = volta * (x2 - x1);
  while (faltando < x1)
  {
    volta++;
  }

  cout << volta;

  return 0;
}