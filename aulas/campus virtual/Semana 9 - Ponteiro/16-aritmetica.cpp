#include <iostream>
using namespace std;

int main()
{
  int vetor[5] = {1, 2, 3, 4, 5};
  int *p = vetor;

  cout << *(p + 1) << endl; // imprime o 2 elemento

  p += 2;             // pula 2 elementos
  cout << *p << endl; // imprime o 3 elemento

  p -= 1;             // volta 1 elemento
  cout << *p << endl; // imprime o 2 elemento

  for (int *i = vetor; *i <= vetor[4]; i++)
  {
    cout << *i << " ";
    p++;
  }

  cout << endl;
}
