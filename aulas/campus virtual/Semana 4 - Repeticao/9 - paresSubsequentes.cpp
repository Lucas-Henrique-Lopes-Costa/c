#include <iostream>
using namespace std;

int main()
{
  int valor, contador1 = 0, contador2 = 1;
  bool contador3 = true;

  cin >> valor;

  if (valor > 9 and valor < 100)
  {
    while (contador3)
    {
      if (valor % 2 == 0)
      {
        contador1++;
        contador2 *= valor;
        cout << valor << endl;
        if (contador1 >= 10)
        {
          contador3 = false;
        }
        valor++;
      }
    }
  }
}