#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  system("clear||cls");

  fstream arquivo;
  string linha;

  arquivo.open("meus_dados.txt", fstream::in|fstream::out|fstream::app);

  // in = input (leitura)
  // out = output (escrita)
  // binary = modo binário
  // ate = para escrita e posiciona no final
  // app = append, abre para escrita sem deletar o conteúdo atual, posicionamento no final | Cria se não existir
  // tcun_c = truncate, abre para escrita e remove o conteúdo antes antes de abrir

  if (arquivo.is_open()) // verifica se o arquivo está aberto
  {
    arquivo << "\nLucas\n";

    cout << "Edicao feita\n";
  }
  else
  {
    cout << "Nao foi possível abrir o arquivo\n";
  }

  arquivo.close(); // grava a operação

  return 0;
}