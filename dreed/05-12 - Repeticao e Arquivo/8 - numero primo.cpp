#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Faça um programa que leia, a partir de um arquivo cujo nome será fornecido pelo usuário, números inteiros até que seja lido um número primo. Depois do primo existirá mais uma string que deverá ser o nome do arquivo onde será escrito os dois menores (menor, seguido do segundo menor) e a soma dos outros (todos os números, exceto os dois menores).

    Exemplo de entrada:

    entrada.txt
    Conteúdo do arquivo entrada.txt:

    4 6 8 9 10 12 11 saida.txt
    Exemplo de saída (no arquivo saida.txt):

    4 6 50
  */

  string entrada;
  cin >> entrada;
  ifstream arquivoIn(entrada);

  int numero, menor, menor2, soma = 0;

  arquivoIn >> numero;
  menor = numero;
  soma += numero;

  string saida;

  bool primo = true;

  while (arquivoIn >> numero)
  {
    soma += numero;

    if (numero < menor)
    {
      menor2 = menor; // troca de variável
      menor = numero;
    }
    else if (numero < menor2)
    {
      menor2 = numero;
    }

    for (int i = 2; i < numero; i++)
    {
      if (numero % i == 0)
      {
        primo = false;
        break;
      }
    }

    if (primo)
    {
      arquivoIn >> saida;
      break;
    }
    else
    {
      primo = true;
    }
  }

  ofstream arquivoOut(saida);
  arquivoOut << menor << " " << menor2 << " " << soma - (menor + menor2) << endl;

  return 0;
}
