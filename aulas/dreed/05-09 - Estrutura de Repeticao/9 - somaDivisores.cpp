#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int n, soma = 0, cont = 1;
  cin >> n;

  while (cont <= n)
  {
    if (cont == n)
    {
      cout << cont << "=";
      soma += cont;
    }
    else if (n % cont == 0)
    {
      cout << cont << "+";
      soma += cont;
    }
    
    cont++;
  }

  cout << soma << endl;

  return 0;
}