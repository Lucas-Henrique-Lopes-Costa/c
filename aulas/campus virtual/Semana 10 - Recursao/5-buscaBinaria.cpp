#include <iostream>
using namespace std;
int main()
{
  int K, N = 10;
  int V[N];

  int i, posicao = -1;
  int pos_inicial = 0;
  int pos_final = N - 1;
  int meio;

  // os elementos do vetor devem ser fornecidos em ordem crescente
  for (i = 0; i < N; i++)
  {
    cin >> V[i];
  }
  cin >> K;
  while (pos_inicial <= pos_final)
  {
    meio = (pos_inicial + pos_final) / 2;
    if (K == V[meio])
    {
      posicao = meio;
      pos_inicial = pos_final + 1; // parar while
    }
    else
    {
      if (K > V[meio])
        pos_inicial = meio + 1;
      else
        pos_final = meio - 1;
    }
  }
  cout << posicao << endl;
  return 0;
}
