#include <iostream>
using namespace std;

int main()
{
  int index;
  cin >> index;

  float nums[index];
  int n;

  for (int i = 0; i < index; i++)
  {
    cin >> nums[i];
  }

  cin >> n;
  float soma = 0;

  for (int i = 0; i < n; i++)
  {
    soma += nums[i];
  }

  cout << soma << endl;

  return 0;
}
