#include <iostream>

using namespace std;

int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  if (n1 < (n2 + n3) and n2 < (n1 + n3) and n3 < (n1 + n2))
  {
    if ((n1 == n2) and (n1 == n3)) {
      cout << "Triangulo equilatero" << endl;
    }
    else if ((n1 == n2) or (n2 == n3)) {
      cout << "Triangulo escaleno" << endl;
    }
    else {
      cout << "Escaleno" << endl;
    }
  }
  else
  {
    cout << "Esse triangulo nao existe" << endl;
  }

  return 0;
}