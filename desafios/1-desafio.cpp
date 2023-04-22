#include <iostream>
#include <math.h>

using namespace std;

int main() {
  system("clear||cls");
  
  float n;
  cout << "Informe o numero: ";
  cin >> n;

  float math = pow(n, 2) - 3 * n + 5;
  cout << "A resposata de x^2 - 3x + 5 e: " << math << endl;

  return 0;
}