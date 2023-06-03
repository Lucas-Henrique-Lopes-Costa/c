#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ifstream arqA("arquivoA.txt");
  ifstream arqB("arquivoB.txt");
  ofstream arqC("arquivoC.txt");
  int n1, n2;
  cin >> n1 >> n2;
  int vet[n1], vet2[n2];

  for (int i = 0; i < n1; i++)
  {
    arqA >> vet[i];
  }
  for (int j = 0; j < n2; j++)
  {
    arqB >> vet2[j];
  }

  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      if (vet[i] == vet2[j])
      {
        arqC << vet[i] << " ";
      }
    }
  }

  return 0;
}