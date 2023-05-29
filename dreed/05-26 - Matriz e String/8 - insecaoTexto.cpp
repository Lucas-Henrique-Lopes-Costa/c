#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  /*
    Faça um programa que insere uma sequência de caracteres dentro de outra.

    Entradas:

    o texto onde será inserido uma sequencia de caracteres (não haverão espaços ou outros caracteres brancos),
    a posição onde será feita a inserção (inserir na posição p significa que, depois da inserção, o texto inserido será encontrado a partir da posição p; a posição do primeiro caractere é zero),
    o texto a ser inserido (sem brancos).
    Saída: o resultado da inserção.

    O programa não precisa ser capaz de lidar com textos que, após a inserção, tenham mais de 200 caracteres.

    É permitido usar funções de biblioteca para determinar o tamanho das strings lidas.

    Exemplo de entrada:

    cores
    2
    mputado
    Exemplo de saída:

    computadores
  */

  // leitura dos dados
  string textoBase, textoInserir;
  int posicao;

  cin >> textoBase >> posicao >> textoInserir;

  // processamento
  // partir texto base em duas partes
  string parte1 = textoBase.substr(0, posicao);
  string parte2 = textoBase.substr(posicao, textoBase.size() - posicao);

  // juntar as partes com o texto a ser inserido
  textoBase = parte1 + textoInserir + parte2;

  // saída dos dados
  cout << textoBase << endl;

  return 0;
}
