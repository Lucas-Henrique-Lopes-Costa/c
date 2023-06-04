#include <iostream>

using namespace std;

void antecessorSucessor(int num, int &antecessor, int &sucessor)
{
  antecessor = num - 1;
  sucessor = num + 1;
}

int main()
{
  int numero, antecessor, sucessor;
  cin >> numero;
  antecessorSucessor(numero, antecessor, sucessor);
  cout << "Antecessor: " << antecessor << endl;
  cout << "Numero: " << numero << endl;
  cout << "Sucessor: " << sucessor << endl;
  return 0;
}