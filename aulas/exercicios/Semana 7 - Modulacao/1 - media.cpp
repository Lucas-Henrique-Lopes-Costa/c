#include <iostream>
using namespace std;

float media(float N1, float N2, float N3, float N4, float N5)
{
  float M;
  M = (N1 + N2 + N3 + N4 + N5) / 5;

  return M;
}

int main()
{
  cout << "Media: " << media(10, 15, 10, 15, 10) << endl;

  return 0;
}
