#include <iostream>
using namespace std;

int main()
{
  int p = 5;
  
  int *ptr = &p; // referencia
  cout << *ptr << endl; // vai imprimir 5
  *ptr = 8; // derreferencia
  cout << p << endl; // vai imprimir 8
  cout << ptr << endl; // vai imprimir o endereço de p

  return 0;
}
