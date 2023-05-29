#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  /*
    Fazer um programa que receba duas palavras. O algoritmo deverá informar quantas vezes a segunda palavra aparece na primeira palavra.

    Entradas:

    String principal.
    String que será procurada na String Principal.
    Saídas:

    Quantidade de vezes que a String de procura foi encontrada na String principal
    Exemplo de Entrada:

    testetestetesteteste
    teste
    Exemplo de Saída:

    4
    Exemplo de Entrada:

    testeialgstringentradaialg
    ialg
    Exemplo de Saída:

    2
  */

  // leitura dos dados
  string conteudo;
  cin >> conteudo;

  string compara;
  cin >> compara;

  // processamento
  int contPalavra = 0;

  for (long unsigned i = 0; i < conteudo.size(); i++)
  {
    // encontra a primeira letra da palavra
    if (conteudo[i] == compara[0])
    {
      bool encontrou = true;
      for (long unsigned j = 0; j < compara.size(); j++)
      {
        // verifica se a palavra está completa
        if (conteudo[i + j] != compara[j])
        {
          encontrou = false;
        }
      }
      if (encontrou)
      {
        contPalavra++;
      }
    }
  }

  // output
  cout << contPalavra << endl;

  return 0;
}
