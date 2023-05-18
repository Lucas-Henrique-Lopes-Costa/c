#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Bandeirantes é a denominação dada aos sertanistas do período colonial, que, a partir do início do século XVI, penetraram nos sertões da América do Sul em busca de riquezas minerais, sobretudo o ouro e a prata.

    Em um dado grupo de bandeirantes, um jogo bem simples se mostrou particularmente popular durante suas longas viagens. Tal jogo consistia em falar uma determinada cor se um dado número natural de 6 algarismos fosse um palíndromo, ou dizer uma segunda outra cor caso não fosse. Faça um programa que leia o nome de duas cores e um número natural (nesta ordem), seu programa deverá exibir o nome da primeira cor caso o número natural fornecido seja um palíndromo ou exibir o nome da segunda cor caso ele não seja um palíndromo. Cada dado de entrada será fornecido em uma linha diferente.

    Dizemos que um número natural N é palíndromo se

    Primeiro algarismo de N é igual ao seu último algarismo
    Segundo algarismo de N é igual ao penúltimo algarismo
    e assim sucessivamente.

    Entradas:

    Nome da primeira cor.
    Nome da segunda cor.
    Número inteiro N.
    Saídas:

    Nome de uma cor segundo a regra definida no enunciado desta questão.
    Exemplo de Entrada:

    azul
    vermelho
    567765
    Exemplo de Saída:

    azul
    Exemplo de Entrada:

    azul
    vermelho
    567675
    Exemplo de Saída:

    vermelho
  */

  string cor1, cor2;
  int numero, n1, n2, n3, n4, n5, n6;

  cin >> cor1 >> cor2 >> numero;

  n1 = numero / 100000;
  n2 = (numero - n1 * 100000) / 10000;
  n3 = (numero - n1 * 100000 - n2 * 10000) / 1000;
  n4 = (numero - n1 * 100000 - n2 * 10000 - n3 * 1000) / 100;
  n5 = (numero - n1 * 100000 - n2 * 10000 - n3 * 1000 - n4 * 100) / 10;
  n6 = (numero - n1 * 100000 - n2 * 10000 - n3 * 1000 - n4 * 100 - n5 * 10);

  if (n1 == n6 && n2 == n5 && n3 == n4)
  {
    cout << cor1 << endl;
  }
  else
  {
    cout << cor2 << endl;
  }

  return 0;
}