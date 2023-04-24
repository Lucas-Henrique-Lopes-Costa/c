#include <iostream>

using namespace std;

void troca(int *&point1, int *&point2)
{
  int temp;

  temp = *point1;
  *point1 = *point2;

  *point2 = temp; // se coloca-se o point2, ficaria tudo igual
}

int main()
{
  system("clear||cls");

  int *point1 = new int;
  cout << "Valor 1: ";
  cin >> *point1;

  int *point2 = new int;
  cout << "Valor 2: ";
  cin >> *point2;

  cout << endl;
  cout << "Valor 1: " << *point1 << endl;
  cout << "Valor 2: " << *point2 << endl;

  cout << endl;
  troca(point1, point2);

  cout << "Valor 1: " << *point1 << endl;
  cout << "Valor 2: " << *point2 << endl;

  return 0;
}
