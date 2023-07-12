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
    while (arquivo.read(c, 1))
    {
      if ((c[0] == 't') or (c[0] == 'T'))
        count++;
    }
    cout << count << endl;
  }

  else
    cout << "arquivo nao pode ser aberto!" << endl;
  return 0;
}
