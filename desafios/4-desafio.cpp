#include <iostream>

using namespace std;

int potencia(float b, int e)
{
  float pot = b;
  for (int i = 1; i < e; i++)
  {
    b *= pot;
  }

  return b;
}

int main()
{
  system("clear||cls");

  float base;
  int expoente;

  while (true)
  {
    cout << "Informe a base da potencia e o expoente: ";
    cin >> base >> expoente;

    int pow = potencia(base, expoente);
    cout << "A potencia de " << base << "^" << expoente << " e = " << pow << endl;

    int q;
    cout << "Digite 1 para repetir, 0 para sair: ";
    cin >> q;
    system("clear||cls");

    if (q == 0)
    {
      break;
    }
    }

  return 0;
}
