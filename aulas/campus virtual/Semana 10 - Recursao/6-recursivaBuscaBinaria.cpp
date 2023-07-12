#include <iostream>
using namespace std;

int BuscaBinaria(int V[], int pos_inicial, int pos_final, int K)
{
  int meio = (pos_inicial + pos_final) / 2;

  if (K == V[meio])
  { // caso base: elemento encontrado
    return meio;
  }
  else if (pos_inicial < pos_final)
  { // caso geral: processo de busca
    if (V[meio] < K)
      return BuscaBinaria(V, meio + 1, pos_final, K);
    else
      return BuscaBinaria(V, pos_inicial, meio - 1, K);
  }
  else
  { // caso base: elemento não encontrado
    return -1;
  }
}

int BuscaBinaria(int vetor[], int inicio, int fim, int procurado)
{
  if (inicio <= fim)
  {
    int meio = (inicio + fim) / 2;
    if (procurado > vetor[meio])
      return binariaRecursiva(vetor, meio + 1, fim, procurado);
    else if (procurado < vetor[meio])
      return binariaRecursiva(vetor, inicio, meio - 1, procurado);
    else
      return meio;
  }
  return -1;
}

int main()
{
  int K, N = 10;
  int V[N];

  // os elementos do vetor devem ser
  // fornecidos em ordem crescente
  for (int i = 0; i < N; i++)
    cin >> V[i];
  cin >> K;

  cout << BuscaBinaria(V, 0, N - 1, K) << endl;
  return 0;
}
