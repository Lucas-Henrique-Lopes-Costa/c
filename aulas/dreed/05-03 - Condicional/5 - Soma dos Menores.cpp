#include <iostream>

using namespace std;

int main()
{
  double n1, n2, n3, n4;
  cin >> n1 >> n2 >> n3 >> n4;

  if (n1 > n2 and n1 > n3 and n1 > n4)
  {
    cout << n2 + n3 + n4 << endl;
  }
  else if (n2 > n1 and n2 > n3 and n2 > n4)
  {
    cout << n1 + n3 + n4 << endl;
  }
  else if (n3 > n1 and n3 > n2 and n3 > n4)
  {
    cout << n1 + n2 + n4 << endl;
  }
  else if (n3 > n1 and n3 > n2 and n3 > n4)
  {
    cout << n1 + n2 + n4 << endl;
  } else {
    cout << n1 + n2 + n3 << endl;
  }

  return 0;
}