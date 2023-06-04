#include <iostream>

using namespace std;

int main()
{
  float valor;
  string tipoCompra;
  int numeroParcelas;

  cin >> valor >> tipoCompra;

  if (tipoCompra == "P")
  {
    cin >> numeroParcelas;

    if (numeroParcelas == 3)
    {
      cout << valor << endl;
      cout << valor / 3 << endl;
    }
    else if (numeroParcelas == 6)
    {
      cout << valor * 1.05 << endl;
      cout << (valor * 1.05) / 6 << endl;
    }
    else
    {
      cout << valor * 1.1 << endl;
      cout << (valor * 1.1) / 12 << endl;
    }
  }
  else
  {
    valor *= 0.9;
    cout << valor << endl;
  }

  return 0;
}