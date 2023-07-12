#include <iostream>
using namespace std;

int main()
{
  int p = 10;
  int q = 20;
  int *ptr1 = &p;
  int *ptr2 = &q;
  cout << *ptr1 << endl;
  cout << *ptr2 << endl;
  cout << *ptr1 * ptr2 << endl;      // trecho com erro!
  cout << (*ptr1) * (*ptr2) << endl; // trecho claro e sem erros - É recomendável o uso de () para evitar confusões entre o operador de indireção e a multiplicação:
}
