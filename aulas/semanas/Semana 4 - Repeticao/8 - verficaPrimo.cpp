#include <iostream>
using namespace std;

int main()
{
  int numero;
  cin >> numero;

  bool primo = true;
  int divisor = 2;

  while ((divisor < numero) and primo)
  {
    if (numero % divisor == 0)
    {
      primo = false;
      break;
    }

    divisor++;
  }

  cout << "primo!" << endl;
}