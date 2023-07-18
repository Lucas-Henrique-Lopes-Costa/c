#include <iostream>
using namespace std;

int buscaSequencial(int *V, int N, int K)
{
  int i = 0;
  while ((i < N) && (V[i] != K))
  {
    i++;
  }

  if (i == N)
  {
    return -1;
  }

  return i;
}

int main()
{
  int K, N = 10;
  int V[N];

  for (int i = 0; i < N; i++)
  {
    cin >> V[i];
  }
  cin >> K;

  cout << buscaSequencial(V, N, K) << endl;

  return 0;
}