#include <iostream>
using namespace std;

int max(int A, int B)
{
  if (A > B)
  {
    return A;
  }
  else
  {
    return B;
  }
}

int maxTres(int A, int B, int C)
{
  int maior = A;
  maior = max(maior, B);
  maior = max(maior, C);
  return maior;
}

int main()
{
  float A, B, C;
  cin >> A >> B >> C;
  cout << maxTres(A, B, C) << endl;
  return 0;
}
