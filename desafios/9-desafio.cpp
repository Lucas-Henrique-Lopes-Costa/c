#include <iostream>

using namespace std;

int main()
{
  system("clear||cls");

  int *idade1 = new int; // não tem nome, só o ponteiro normal
  int *idade2 = new int;

  cout << "Qual e a idade da primeria pessoa? ";
  cin >> *idade1;

  cout << "Qual e a idade da segunda pessoa? ";
  cin >> *idade2;

  float *media = new float;
  *media = (*idade1 + *idade2) / 2;

  cout << "A media das idades e: " << *media << endl;

  return 0;
}
