#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream arqEntrada("entrada.txt");
  string maisAs, palavras[100]; // vetor de strings

  int totalVogais, indicePalavra, indiceLetra, tamanhoPalavra;
  indicePalavra = 0;

  if (arqEntrada)
  {
    while (indicePalavra < 100 and arqEntrada >> palavras[indicePalavra])
    {
      indicePalavra++;
    }
  }

  int totalPalavras = indicePalavra;
  indicePalavra = 0;
  indiceLetra = 0;

  while (indicePalavra < totalPalavras)
  {
    tamanhoPalavra = palavras[indicePalavra].size();
    totalVogais = 0;

    while (indiceLetra < tamanhoPalavra)
    {
      if (palavras[indicePalavra][indiceLetra] == 'a' or
          palavras[indicePalavra][indiceLetra] == 'e' or
          palavras[indicePalavra][indiceLetra] == 'i' or
          palavras[indicePalavra][indiceLetra] == 'o' or
          palavras[indicePalavra][indiceLetra] == 'u')
      {
        totalVogais++;
        indicePalavra++;
      }
    }

    if (totalVogais >= 3)
    {
      cout << palavras[indicePalavra] << endl;
    }

    indicePalavra++;
  }
  return 0;
}