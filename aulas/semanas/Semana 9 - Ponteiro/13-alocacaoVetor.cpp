#include <iostream>
using namespace std;

int main()
{
  int N = 10;

  int *ptr = new int[N];
  ptr[0] = 5;
  ptr[8] = 27;

  cout << ptr[0] << endl;
  cout << ptr[8] << endl;

  delete[] ptr; // libera a memória alocada
}
