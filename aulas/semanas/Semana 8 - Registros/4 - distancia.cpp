#include <iostream>
#include <math.h>
using namespace std;

struct ponto
{
  int X, Y;
  void atribuir(int A, int B)
  {
    X = A;
    Y = B;
  }
  float modulo()
  {
    return sqrt(pow(X, 2) + pow(Y, 2));
  }
};

int main()
{
  int A, B;
  ponto P;

  for (int i = 0; i < 10; i++)
  {
    cin >> A >> B;
    P.atribuir(A, B);
    cout << "Módulo: " << P.modulo() << endl;
  }
  return 0;
}
