#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  string nomeArq;
  cin >> nomeArq;
  ifstream arquivo(nomeArq.c_str());

  char c[1];
  int count = 0;

  if (arquivo)
  {
    arquivo.write((const char *)(&variavel), sizeof(tipo_dado_variavel));
    // ou
    arquivo.write(reinterpret_cast<const char *>(&variavel), sizeof(tipo_dado_variavel));

    arquivo.read((char *)(&variavel), sizeof(tipo_dado_variavel));
    // ou
    arquivo.read(reinterpret_cast<char *>(&variavel), sizeof(tipo_dado_variavel));

    cout << count << endl;
  }

  else
    cout << "arquivo nao pode ser aberto!" << endl;
  return 0;
}
