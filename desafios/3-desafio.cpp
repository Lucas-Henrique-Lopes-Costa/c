#include <iostream>

using namespace std;

int fatorial(int x)
{
  int fatorial = 1;
  for (int i = 1; i <= x; i++)
  {
    fatorial *= i;
  }

  return fatorial;
}

int main()
{
  system("clear||cls");

  int n;

  while (true)
  {
    cout << "Informe algum numero: ";
    cin >> n;

    if (n <= 0)
    {
      cout << "Informe um numero posito!\n";
    }
    else
    {
      break;
    }
  }

  int fat = fatorial(n);
  cout << "O fatorial de " << n << "! e " << fat << endl;

  return 0;
}
