#include <iostream>
using namespace std;

void troca(int &A, int &B)
{
  int AUX = A;
  A = B;
  B = AUX;
  cout << "A e B no subprograma troca: " << A << " " << B << endl;
}

int main()
{
  int X, Y;
  cin >> X >> Y;
  cout << "X e Y antes subprograma troca: " << X << " " << Y << endl;
  troca(X, Y);
  cout << "X e Y depois subprograma troca: " << X << " " << Y << endl;
  return 0;
}
