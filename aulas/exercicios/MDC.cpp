#include <iostream>

using namespace std;

int main()
{
  int a, b, maior, menor, MDC;
  cin >> a >> b;

  if (a > b)
  {
    maior = a;
    menor = b;
  }
  else
  {
    maior = b;
    menor = a;
  }

  while ((maior % menor) != 0)
  {
    MDC = maior % menor;
    maior = menor;
    menor = MDC;
  }

  cout << MDC << endl;

  return 0;
}