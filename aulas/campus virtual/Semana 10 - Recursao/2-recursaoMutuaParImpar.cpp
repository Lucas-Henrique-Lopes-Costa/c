#include <iostream>
using namespace std;

bool impar(int N);

bool par(int N)
{
  if (N == 0)
    return true;
  else
    return impar(N - 1);
}

bool impar(int N)
{
  if (N == 0)
    return false;
  else
    return par(N - 1);
}
int main()
{
  int X;
  cin >> X;
  if (par(X))
    cout << X << " é par." << endl;
  else
    cout << X << " é ímpar." << endl;
  return 0;
}
