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

  float renda;
  int idade;

  while (true)
  {
    cout << "Informe a sua idade: ";
    cin >> idade;
    if (idade >= 0)
    {
      break;
    }
    else
    {
      cout << "informe um valor valido";
    }
  }

  while (true)
  {
    cout << "Informe a sua renda: ";
    cin >> renda;
    if (renda >= 0)
    {
      break;
    }
    else
    {
      cout << "informe um valor valido";
    }
  }

  if (idade >= 21 && renda < 1200)
  {
    cout << "Aprovado!\n";
  }
  else
  {
    cout << "Não aprovado!\n";
  }

  return 0;
}
