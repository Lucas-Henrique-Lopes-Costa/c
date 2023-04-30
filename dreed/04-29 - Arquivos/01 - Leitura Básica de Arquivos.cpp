#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string arquivoName;
  cin >> arquivoName;

  ifstream arquivo(arquivoName);
  string dados;

  if (arquivo)
  {
    while (arquivo >> dados) // será repetido enquanto for possível ter um valor
    {
      cout << dados << " ";
    }
    arquivo.close();
  }
  cout << endl;

  arquivo.close();

  return 0;
}