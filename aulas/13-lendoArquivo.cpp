#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  system("clear||cls");

  ifstream arquivo("meus_dados.txt");
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