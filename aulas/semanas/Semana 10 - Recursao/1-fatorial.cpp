#include <iostream>
using namespace std;

int fatorial(int N)
{
  if (N == 0)
  if (N == 0)
  {
    return 1;
  }
  else
  {
    return (N * fatorial(N - 1));
  }
}

int main()
{
  int N;
  cin >> N;

  cout << fatorial(N) << endl;

  return 0;
}