#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Faça um programa que lê um arquivo texto e produz outro arquivo, com o mesmo conteúdo do primeiro, exceto pelos caracteres brancos que devem ser eliminados. Os nomes dos arquivos de entrada e saída devem ser lidos pelo programa. Não é permitido ler o arquivo de entrada todo para a memória antes de escrever o arquivo de saída.

    Entradas:

    Nome do arquivo de entrada (sequência de caracteres).
    Nome do arquivo de saída (sequência de caracteres).
    Saídas:

    Criar uma cópia do arquivo.
    Exemplo de entrada (entrada padrão):

    Entrada.txt
    Saida.txt
    Exemplo de entrada (arquivo Entrada.txt):

    Espero que o dredd te de 100
    Exemplo de saída (arquivo Saida.txt):

    Esperoqueodreddtede100
  */

  string entrada;
  cin >> entrada;
  ifstream arquivoIn(entrada);

  string saida;
  cin >> saida;
  ofstream arquivoOut(saida);

  char letra;

  while (arquivoIn >> letra)
  {
    if (letra != ' ')
    {
      arquivoOut << letra;
    }
  }

  return 0;
}
