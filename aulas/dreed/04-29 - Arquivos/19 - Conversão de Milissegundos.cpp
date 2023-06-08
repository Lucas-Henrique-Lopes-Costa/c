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

  // Entrada: 8746900

  // divite por 1000 -> segundos 8746
  // divide por 60 -> minutos 145
  // divide por 60 -> horas 2
  int horas = milissegundos / (1000 * 60 * 60); // 2

  // resto da divisão das horas -> milissegundos restantes
  // divide por 1000 -> segundos
  // divide por 60 -> minutos
  int minutos = (milissegundos % (1000 * 60 * 60) / (1000 * 60)); // 25

  // resto da divisão dos minutos -> milissegundos restantes
  // divide por 1000 -> segundos (deve ir com o .0 porque é float)
  float segundos = (milissegundos % (1000 * 60) / 1000.0); // 46.9

  ofstream arquivoOut("horario.txt");
  arquivoOut << horas << ":" << minutos << ":" << segundos << endl;

  return 0;
}
