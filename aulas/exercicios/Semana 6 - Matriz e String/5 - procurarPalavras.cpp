#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream arqEntrada("entrada.txt");
  string procurada, palavras[100]; // vetor de strings

  int totalPalavras = 0, indicePalavra = 0;
  bool encontrada = false; // sentinela para interromper se a palavra for encontrada

  cin >> procurada;

  if (arqEntrada)
  {
    while (indicePalavra < 100 and arqEntrada >> palavras[indicePalavra])
    {
      indicePalavra++;
    }
  }
  totalPalavras = indicePalavra;

  indicePalavra = 0;

  while (indicePalavra < totalPalavras and !encontrada)
  {
    if (palavras[indicePalavra] == procurada)
    {
      cout << "Palavra encontrada" << endl;
      encontrada = true;
    }
    indicePalavra++;
  }
  if (!encontrada)
  {
    cout << "Palavra não encontrada";
  }

  return 0;
}