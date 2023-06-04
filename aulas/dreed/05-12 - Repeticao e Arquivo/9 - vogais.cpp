#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Elabore um programa que recebe o nome de um arquivo de texto e imprima quantas vogais esse arquivo possui. O nome do arquivo a ser aberto deverá ser digitado pelo usuário e o número de vogais escrito na saída padrão.

    Entradas:

    entrada padrão
      o nome do arquivo de onde serão lidos números inteiros (não haverá espaços)
    
    arquivo texto
      vários números inteiros separados por espaços
    
    Saída:

    O número de vogais desse arquivo.
    
    Exemplo de entrada:
      arquivo-a-ser-aberto.txt
    
    Exemplo de arquivo:

    O que queriamos preservar era nao so um bom ambiente para fazer programacao.
    Mas sim um sistema em torno do qual um companheirismo poderia se formar. 
    Exemplo de saída:

    57
  */

  string entrada;
  cin >> entrada;
  ifstream arquivoIn(entrada);

  char letra;
  int soma = 0;

  while (arquivoIn >> letra)
  {
    if (letra == 'a' or letra == 'A')
      soma++;
    if (letra == 'e' or letra == 'E')
      soma++;
    if (letra == 'i' or letra == 'I')
      soma++;
    if (letra == 'o' or letra == 'O')
      soma++;
    if (letra == 'u' or letra == 'U')
      soma++;
  }
  
  cout << soma << endl;
  return 0;
}
