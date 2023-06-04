#include <iostream>

using namespace std;

int main()
{

  int A, B;
  cin >> A;
  cin >> B;

  float vetA[A];
  float vetB[B];

  for (int i = 0; i < A; i++)
  {
    cin >> vetA[i];
  }

  int cont = 0, contAux = 0;
  for (int i = 0; i < B; i++)
  {
    cin >> vetB[i];
  }

  for (int i = 0; i < A; i++)
  {
    cont = 0;

    for (int j = 0; j < B; j++)
    {
      if (vetA[i] == vetB[j])
      {
        cont++;
      }
    }
    
    if (cont > 0)
    {
      cout << vetA[i] << " ";
      contAux++;
    }
  }

  if (contAux == 0)
  {
    cout << -1 << endl;
  }

  return 0;
}