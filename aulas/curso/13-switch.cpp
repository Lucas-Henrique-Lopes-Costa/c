#include <iostream>
using namespace std;

int main()
{
  int numero1, numero2;
  char operacao;

  cin >> numero1 >> numero2 >> operacao;

  switch (operacao)
  {
  case '+':
    cout << numero1 + numero2 << endl;
    break;
  case '-':
    cout << numero1 - numero2 << endl;
    break;
  }
}