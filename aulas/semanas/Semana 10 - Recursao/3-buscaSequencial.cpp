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
  i = 0;
  while (i < N) // olhe a melhorada
  {
    if (V[i] == K)
    {
      posicao = i;
    }
    i++;
  }

  cout << posicao << endl;
  
  return 0;
}
