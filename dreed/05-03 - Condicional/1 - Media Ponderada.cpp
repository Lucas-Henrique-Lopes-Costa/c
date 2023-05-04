#include <iostream>

using namespace std;

int main()
{
  double TL, AS, EF;
  cin >> TL >> AS >> EF;
  TL *= 2;
  AS *= 3;
  EF *= 5;

  double media = (TL + AS + EF) / 10;
  cout << media << endl;

  if (media >= 8)
  {
    cout << "A";
  }
  else if (media >= 7)
  {
    cout << "B";
  }
  else if (media >= 6)
  {
    cout << "C";
  }
  else if (media >= 5)
  {
    cout << "D";
  }
  else
  {
    cout << "E";
  }

  return 0;
}