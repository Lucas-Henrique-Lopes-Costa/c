#include <sstream>
#include <iostream>
using namespace std;

int main()
{
  stringstream buffer; // buffer de string
  string texto;

  cin >> texto;
  buffer.str(texto); // buffer recebe texto

  int x;
  buffer >> x; // buffer recebe x
  x *= 2; // dobra x
  cout << x << endl;

  buffer.clear(); // limpa o buffer

  buffer << texto << " " << x << " " << x * 3;
  texto = buffer.str();
  cout << texto << endl;
  
  return 0;
}