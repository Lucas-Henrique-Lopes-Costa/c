#include <iostream>
using namespace std;

int main()
{
  int cont = 0;
  soma = 0;
  num;
  bool tudoOk = true;

  do
  {
    cin >> num;
    if (num >= 0)
    {
      cout++;
      soma += num;

      if ((cont == 20) or (soma >= 200))
      {
        tudoOk = false;
      }
    }
    else
    {
      tudoOk = false;
    }

  } while (tudoOk);

  cout << soma << endl;

  return 0;
}