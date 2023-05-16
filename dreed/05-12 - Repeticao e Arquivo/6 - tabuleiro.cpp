#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Faça um programa que escreve tabuleiros quadrados de tamanho variável no arquivo jogo.txt. O programa deve usar iteração para tratar o tamanho variável.

    Um tabuleiro é um quadrado com posições pretas e brancas dispostas alternadamente. Para representar as posições de cores diferentes, use o caractere # (cerquilha) para posições pretas e . (ponto) para posições brancas. O canto superior esquerdo do tabuleiro deve ser branco.

    Entradas:

    Um número inteiro que descreve as dimensões do tabuleiro (número de linhas e colunas).
    Saídas (arquivo jogo.txt):

    Sequências alternadas dos caracteres # e . (sem espaços em branco) em linhas diferentes, criando a aparência de um tabuleiro.
    Exemplo de entrada:

    5
    Exemplo de saída (arquivo jogo.txt):

    .#.#.
    #.#.#
    .#.#.
    #.#.#
    .#.#.
  */
  
  int n;
  cin >> n;

  ofstream arquivoOut("jogo.txt");

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++) {
      if ((i + j) % 2 == 0) {
        arquivoOut << ".";
      } else {
        arquivoOut << "#";
      }
    }
    arquivoOut << endl;
  }
  

  return 0;
}
