#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
  /*
    Faça um programa que abre dois arquivos, arquivoA.txt e arquivoB.txt, ambos contendo N palavras. Denote as palavras do arquivo arquivoA.txt, na sequência em que aparecem no arquivo, por a1, a2, ..., aN. Denote as palavras do arquivo arquivoB.txt, na sequência em que aparecem no arquivo, por b1, b2, ..., bN. Seu programa deverá escrever um terceiro arquivo, arquivoC.txt, contendo as palavras de arquivoA.txt e arquivoB.txt, na seguinte ordem:

    a1 b1 a2 b2 ... ak bk ... aN bN.
    Entradas (arquivoA.txt)

    Sequência de N palavras: a1 a2 ... aN
    Entradas (arquivoB.txt)

    Sequência de N palavras: b1 b2 ... bN
    Saídas (arquivoC.txt)

    Sequência de 2N palavras: a1 b1 a2 b2 ... ak bk ... aN bN

    Exemplo de entrada (arquivoA.txt)

    Copo Cadeira Janela Cavalo
    Exemplo de entrada (arquivoB.txt)

    Cachorro Café Borracha Sapato
    Exemplo de saída (arquivoC.txt)

    Copo Cachorro Cadeira Café Janela Borracha Cavalo Sapato
  */

  ifstream arquivoInA("arquivoA.txt");
  ifstream arquivoInB("arquivoB.txt");
  ofstream arquivoOut("arquivoC.txt");

  string A, B;
  int cont = 0;

  while (arquivoInA >> A and arquivoInB >> B)
  {
    if (cont == 0)
    {
      arquivoOut << A << " " << B;
      cont++;
    }
    else
    {
      arquivoOut << " " << A << " " << B;
    }
  }

  // Status ou Justificativa de Nota: A quantidade de dados escritos pelo programa é diferente da quantidade de dados esperados.

  return 0;
}
