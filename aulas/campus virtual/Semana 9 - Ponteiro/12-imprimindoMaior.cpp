/*
O usuário irá inserir dois valores inteiros que serão armazenados em num1 e num2, respectivamente. Caso o valor armazenado em num1 seja maior que o valor armazenado em num2, ptr1 deverá armazenar o endereço de num1 e ptr2 deverá armazenar o endereço de num2. Caso contrário, ptr1 deve armazenar o endereço de num2 e ptr2 deverá armazenar o endereço de num1. Ao final, os endereços armazenados  em ptr1 e ptr2 deverão ser impressos. 
*/

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, *ptr1, *ptr2;
  cin >> num1 >> num2;

  if (num1 > num2)
  {
    ptr1 = &num1;
    ptr2 = &num2;
  }
  else
  {
    ptr1 = &num2;
    ptr2 = &num1;
  }

  cout << ptr1 << endl; // imprimindo endereço
  cout << ptr2 << endl;
  
  return 0;
}