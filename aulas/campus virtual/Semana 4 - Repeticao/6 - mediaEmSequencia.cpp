#include <iostream>

using namespace std;

int main() {
  int num;
  int cont = 0;
  float valor;
  float soma = 0;
  
  cin >> num;

  while (cont < num) // para ser decrescente, coloca invertido
  {
    cin >> valor;
    cont++; // e aqui --
    soma += valor;
  }
  
  cout << "Media: " << float(soma)/num << endl;

  return 0;
}