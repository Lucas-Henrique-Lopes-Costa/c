#include <iostream>

using namespace std;

int main()
{
  int p;
  int *pt = &p;

  *pt = 5;

  cout << p << endl;
  return 0;
}
