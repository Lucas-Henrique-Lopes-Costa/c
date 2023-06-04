#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  /*
    Faça um programa que procura um texto dentro de outro texto, sem utilizar qualquer função ou método auxiliar (ou seja: a busca deve ser manual).

    O programa deve informar a posição da primeira ocorrência do texto procurado. Caso o texto procurado não seja encontrado, a posição informada deverá ser -1 para indicar essa situação especial.

    O textos terão no máximo 254 caracteres. Todos os caracteres do texto serão não-brancos.

    Entradas:

    O texto no qual será realizada a busca,
    O texto que será buscado no anterior.
    Saída:

    a posição em que o texto procurado começou a ser encontrado no outro texto, ou -1 se ele não for encontrado.
    Exemplo de entrada:

    aabcbcbbacbbaa
    cbb
    Exemplo de saída:

    5
  */

  // leitura dos dados
  string conteudo;
  cin >> conteudo;

  string compara;
  cin >> compara;

  // processamento
  int index = -1;

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
        index = i;
        // para o loop
        i = conteudo.size();
      }
    }
  }

  // output
  cout << index << endl;

  return 0;
}
