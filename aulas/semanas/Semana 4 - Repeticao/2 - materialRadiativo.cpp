#include <iostream>

using namespace std;

int main() {
  float quantidade;
  cin >> quantidade;

  int tempo = 0; // sempre tem que ser declarado e inicializado com 0

  while(quantidade >= 0.1) {
    quantidade -= 25.0/100.0 * quantidade;

    tempo += 30;
  }

  int horas = tempo / 3600;
  int minutos = (tempo % 3600) / 60;
  int segundos = (tempo % 3600) % 60;

  cout << horas << ":" << minutos << ":" << segundos << endl;

  return 0;
}