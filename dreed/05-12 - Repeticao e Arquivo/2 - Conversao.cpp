#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  fstream arquivoIn("entrada.txt");

  double dist, velocidade, tempo;
  while (arquivoIn >> dist >> velocidade >> tempo)
  {
    cout << fixed << setprecision(2) << dist / 1.852 << " " << (dist + (velocidade * tempo)) / 1.852 << endl;
  }

  return 0;
}