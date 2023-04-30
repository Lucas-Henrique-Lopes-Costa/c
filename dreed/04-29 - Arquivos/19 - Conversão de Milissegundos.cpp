#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  ifstream arquivoIn("tempo.txt");
  int milissegundos;
  arquivoIn >> milissegundos;

  int horas = milissegundos / (1000 * 60 * 60);     // 2
  cout << milissegundos / (1000 * 60 * 60) << endl; // 1546899,99984

  int minutos = (milissegundos % (1000 * 60 * 60) / (1000 * 60));
  cout << milissegundos % (1000 * 60 * 60) << endl;                 // 1546899,99984
  cout << (milissegundos % (1000 * 60 * 60) / (1000 * 60)) << endl; // 25

  float segundos = (milissegundos % (1000 * 60) / 1000.0);
  cout << milissegundos % (1000 * 60) << endl; // 46900

  /*
    para converter milissegundos para horas, o programa divide o tempo em milissegundos por 1000 (para obter o tempo em segundos), em seguida, divide o tempo em segundos por 60 * 60 (para obter o tempo em horas).

    Para obter o tempo em minutos, o programa usa o operador % (resto da divisão) para obter o tempo que sobrou após a conversão para horas, e então divide esse tempo em segundos por 60 (para obter o tempo em minutos).

    Por fim, para obter o tempo em segundos, o programa usa novamente o operador % para obter o tempo que sobrou após a conversão para minutos, e então divide esse tempo em milissegundos por 1000 (para obter o tempo em segundos em formato de ponto flutuante).
  */

  ofstream arquivoOut("horario.txt");
  arquivoOut << horas << ":" << minutos << ":" << segundos << endl;

  return 0;
}
