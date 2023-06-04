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
  *point1 = 5;

  int *point2 = new int;
  *point2 = 7;

  cout << "Ponteiro 1: " << point1 << " e " << *point1 << endl;
  cout << "Ponteiro 2: " << point2 << " e " << *point2 << endl;

  troca(point1, point2);

  cout << "Ponteiro 1: " << point1 << " e " << *point1 << endl;
  cout << "Ponteiro 2: " << point2 << " e " << *point2 << endl;

  return 0;
}
