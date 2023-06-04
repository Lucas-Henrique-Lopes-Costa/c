#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  ifstream arquivo("magia.txt");

  int H, voltas, hora, total = 0;
  arquivo >> H;

  while (arquivo >> hora >> voltas)
  {
    int tempo = hora - voltas;

    if (tempo <= H)
      total++;
  }

  cout << total << endl;

  return 0;
}
