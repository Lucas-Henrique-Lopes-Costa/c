#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x = 0, y = 5;

  while (x < 4 or y > 5)
  {
    x++;
    y++;
    y = y - x;
  }

  cout << x + y << endl;
}