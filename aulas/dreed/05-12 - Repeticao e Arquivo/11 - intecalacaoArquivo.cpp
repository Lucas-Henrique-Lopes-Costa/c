#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
  /*
    Faça um programa que abre dois arquivos, arquivoA.txt e arquivoB.txt, ambos contendo N palavras. Denote as palavras do arquivo arquivoA.txt, na sequência em que aparecem no arquivo, por a1, a2, ..., aN. Denote as palavras do arquivo arquivoB.txt, na sequência em que aparecem no arquivo, por b1, b2, ..., bN. Seu programa deverá escrever um terceiro arquivo, arquivoC.txt, contendo as palavras de arquivoA.txt e arquivoB.txt, na seguinte ordem:

    a1 bN a2 bN-1 ... ak bN-k+1 ... aN b1.
    Entradas (arquivoA.txt)

    Sequência de N palavras: a1 a2 ... aN
    Entradas (arquivoB.txt)

    Sequência de N palavras: b1 b2 ... bN
    Saídas (arquivoC.txt)

    Sequência de 2N palavras: a1 bN a2 bN-1 ... ak bN-k+1 ... aN b1


    Exemplo de entrada (arquivoA.txt)

    Copo Cadeira Janela Cavalo
    Exemplo de entrada (arquivoB.txt)

    Cachorro Café Borracha Sapato
    Exemplo de saída (arquivoC.txt)

    Copo Sapato Cadeira Borracha Janela Café Cavalo Cachorro
  */

  ifstream arquivoInA("arquivoA.txt");
  ifstream arquivoInB("arquivoB.txt");
  ofstream arquivoOut("arquivoC.txt");

  vector<string> palavrasA;
  vector<string> palavrasB;

  string palavra;
  while (arquivoInB >> palavra)
  {
    palavrasB.push_back(palavra);
  }

  int cont = 0;
  int n = palavrasB.size();
  while (arquivoInA >> palavra)
  {
    arquivoOut << palavra << " " << palavrasB[n - cont - 1] << " ";
    cont++;
  }

  return 0;
}
