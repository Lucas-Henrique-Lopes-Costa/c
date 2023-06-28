#include <iostream>

using namespace std;

int main()
{
  int qtDigitos;
  cin >> qtDigitos;

  int *digitos = new int[qtDigitos];

  for (int i = 0; i < qtDigitos; i++)
  {
    cin >> digitos[i];
  }

  bool capicua = true;
  int i = 0;
  
  while (i < qtDigitos - 1 and capicua)
  {
    qtDigitos--;
    if (digitos[i] != digitos[qtDigitos])
    {
      capicua = false;
    }
    else
    {
      if (digitos[i] == digitos[qtDigitos])
      {
        cout << i << " ";
        cout << digitos[i] << " ";
        cout << qtDigitos << " ";
        cout << digitos[qtDigitos] << " ";
      }
    }
    i++;
  }

  return 0;
}