#include <iostream>
#include <string>
using namespace std;

int main()
{
  string primeiroTexto = "Oa ud!";
  char segundoTexto[10] = "l,Mno!";

  int i = 0;

  while (i < 6)
  {
    cout << primeiroTexto[i] << segundoTexto[i];
    i++;
  }
  
  cout << endl;
  return 0;
}
