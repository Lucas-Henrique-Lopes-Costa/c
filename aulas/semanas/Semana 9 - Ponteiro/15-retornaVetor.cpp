#include <iostream>
using namespace std;

int *geraVetor(int &n)
{
  int *V = new int[n];

  for (int i = 0; i < n; i++)
  {
    V[i] = i;
  }

  return V;
}

int main()
{
  int n;
  cin >> n;
  int *meuVetor = geraVetor(n);

  for (int i = 0; i < n; i++)
  {
    cout << meuVetor[i] << " ";
  }

  cout << endl;
  
  delete[] meuVetor;
  return 0;
}