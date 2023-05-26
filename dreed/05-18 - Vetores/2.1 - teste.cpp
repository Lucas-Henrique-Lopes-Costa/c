#include <iostream>
using namespace std;

int main()
{
  int tam;
  cin >> tam;

  int *vet = new int[tam];
  for (int i = 0; i < tam; i++)
    cin >> vet[i];

  int i = 0, j = tam - i - 1;
  bool igual = false;
  while (vet[i] == vet[j] and i < tam / 2)
  {
    cout << i << " " << vet[i] << " " << j << " " << vet[j] << " ";
    i++;
    j = tam - i - 1;
    igual = true;
  }

  if (igual)
    cout << endl;
  if (i == tam / 2)
    cout << "sim" << endl;
  else
    cout << "nao" << endl;

  delete[] vet;

  return 0;
}