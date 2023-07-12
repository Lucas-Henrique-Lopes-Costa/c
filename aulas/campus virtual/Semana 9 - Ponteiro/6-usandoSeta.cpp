#include <iostream>
using namespace std;

struct Ponto
{
  int X, Y;
};

int main()
{
  Ponto P1, *P2, *P3;

  cin >> P1.X >> P1.Y;

  P2 = &P1;
  P3 = &P1;

  // formas de acessar o struct
  cout << "P1: X = " << P1.X << " Y = " << P1.Y << endl;
  cout << "P2: X = " << (*P2).X << " Y = " << (*P2).Y << endl;
  cout << "P3: X = " << P3->X << " Y = " << P3->Y << endl; // a seta é usada para acessar membros de uma struct através de um ponteiro
}
