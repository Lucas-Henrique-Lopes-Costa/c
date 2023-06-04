#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
  /*
    Construa um programa capaz de justificar um conjunto de palavras.

    O usuário deverá inicialmente definir o número de palavras a serem justificadas. Em seguida o programa deverá ler a quantidade de palavras definida e no fim do processo apresentar as palavras na mesma ordem de leitura alinhadas a direita. Para o alinhamento deverá ser utilizado o caractere * (asterisco). Assuma que as palavras não contêm espaços.

    Obs.: Para programas em C, recomenda-se não utilizar o comando getline.

    Para programas em Python, os vetores são implementados como listas cujos elementos são todos homogêneos.

    Entrada:

    Número de palavras,
    Palavras.
    Saí­da:

    Palavras digitadas alinhadas a direita utilizando-se como referência a maior palavra. A ordem das palavras deverá ser a mesma da entrada.
    Exemplo de entrada:

    4
    PROVA
    ALGORITMOS
    UFLA
    DCC
    Exemplo de saída:

    *****PROVA
    ALGORITMOS
    ******UFLA
    *******DCC
  */

  // leitura dos dados
  int numeroDePalavras;
  cin >> numeroDePalavras;

  string palavras[numeroDePalavras];

  for (int i = 0; i < numeroDePalavras; i++)
  {
    cin >> palavras[i];
  }

  // processamento
  long unsigned maiorPalavra = 0;

  for (int i = 0; i < numeroDePalavras; i++)
  {
    if (palavras[i].length() > maiorPalavra)
    {
      maiorPalavra = palavras[i].length();
    }
  }

  // output
  for (int i = 0; i < numeroDePalavras; i++)
  {
    // para cada letra, vai preecher de * até chegar no tamanho da maior palavra
    for (long unsigned j = 0; j < (maiorPalavra - palavras[i].length()); j++)
    {
      cout << "*";
    }

    cout << palavras[i] << endl;
  }

  return 0;
}
