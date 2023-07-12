#include <iostream>

using namespace std;

int main() {
  int num;
  int quantidade = 0;

  do
  {
    cin >> num;

    if (((num % 2) == 0) and (num != 0))
    {
      quantidade++;
    }
    
  } while (num != 0);

  cout << "Quantidade de pares? " << quantidade << endl;
  
  return 0;
}