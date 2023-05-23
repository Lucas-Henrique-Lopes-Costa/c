#include <iostream>

using namespace std;

int main()
{
  int vetor[15], i = 0, aux;
  bool teste = true;

  while (teste)
  {
    cin >> aux;
    if (aux < 0)
    {
      teste = false;
    }
    else if (aux >= 0)
    {
      vetor[i] = aux;
    }
    i++;
  }

  int  multiplo = 0;

  for (int i = 14; i >= 2; i--)
  {
    if (vetor[i] % vetor[0] == 0 and vetor[i] != 0)
    {
      cout << vetor[i] << " " << endl;
      multiplo++;
    }
  }

  if (multiplo == 0)
  {
    cout << -1;
  }

  return 0;
}