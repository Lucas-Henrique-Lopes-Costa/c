#include <iostream>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  if ((A > B) and (B > C))
    cout << C << endl;
  if ((A > C) and (C > B))
    cout << B << endl;
  cout << B << endl;
  if ((C > B) and (B > A))
    cout << A << endl;

  return 0;
}