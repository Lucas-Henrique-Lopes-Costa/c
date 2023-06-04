#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float x = 1.1;

  if (abs(2 * x - 2.2) <= 0.00001)
  {
    cout << "passou no 2o. teste" << endl;
  }

  return 0;
}
