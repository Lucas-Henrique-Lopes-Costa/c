#include <iostream>
using namespace std;

int main()
{
  int K, N = 10;
  int V[N];

  int i, posicao = -1;
  for (i = 0; i < N; i++)
  {
    cin >> V[i];
  }

  cin >> K;
  while ((i < N) and (V[i] != K))
  {
    i++;
  }

  if (i != N)
  {
    posicao = i;
  }

  cout << posicao << endl;

  return 0;
}
