#include <iostream>
using namespace std;

int main()
{
  int K, N = 10;
  int V[N];

  int posicao = -1;
  for (int i = 0; i < N; i++)
  {
    cin >> V[i];
  }

  cin >> K;

  int i = 0;
  while ((i < N) && (V[i] != K))
  {
    i++;
  }

  cout << i << endl;

  if (i != N)
  {
    posicao = i;
  }

  cout << posicao << endl;

  return 0;
}
