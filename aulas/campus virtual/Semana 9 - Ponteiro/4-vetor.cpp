#include <iostream>
using namespace std;

int main()
{
  int vetor[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> vetor[i];
  }

  int *ptr1 = (int *)&vetor; // casting, enxergando o endereço do vetor como um ponteiro para inteiro
  int *ptr2 = vetor;

  cout << vetor << endl;
  cout << &vetor << endl;
  cout << &vetor[1] << endl;

  cout << ptr1 << endl;
  cout << ptr2 << endl;
}
