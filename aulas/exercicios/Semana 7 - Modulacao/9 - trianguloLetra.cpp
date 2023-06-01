#include <iostream>
using namespace std;

void imprimirTriangulo(int n)
{
  char letra = 'a';
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << letra << " ";
      letra++;
    }
    cout << endl;
    letra = 'a';
  }
}

int main()
{
  int n;
  cout << "Digite um numero: ";
  cin >> n;
  imprimirTriangulo(n);

  return 0;
}