#include <iostream>

using namespace std;

int main()
{
  int idade;
  float peso;
  cin >> idade >> peso;

  if (idade < 20)
  {
    if (peso < 60)
    {
      cout << 9 << endl;
    }
    else if (peso > 90)
    {
      cout << 7 << endl;
    }
    else
    {
      cout << 8 << endl;
    }
  }

  else if (idade >= 20 and idade <= 50)
  {
    if (peso < 60)
    {
      cout << 6 << endl;
    }
    else if (peso > 90)
    {
      cout << 4 << endl;  
    }
    else
    {
      cout << 5 << endl;
    }
  }

  else
  {
    if (peso < 60)
    {
      cout << 3 << endl;
    }
    else if (peso > 90)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << 2 << endl;
    }
  }

  return 0;
}