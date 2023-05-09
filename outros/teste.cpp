#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x = 0, y = 5;

  do {
    x++;
    y++;
    y = y - x;
  }
  while (x < 4 and y > 5);

  cout << x + y << endl;
}