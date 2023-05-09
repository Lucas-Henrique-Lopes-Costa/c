#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ofstream arquivoOut("meus_dados.txt"); // já abre o aquivo e coloca na viariável -> mais eficiente
  ofstream file;
  file.open("meus_dados.txt"); // menos eficiente
  arquivoOut << "Joaquim..." << endl;
  arquivoOut.close();
  // close() é chamado automaticamente caso o programa termine normalmente, sem uso de exit().

  ifstream arquivoIn("meus_dados.txt");
  string dados;

  // verifica se existe o arquivo
  if (arquivoIn)
  {
    while (arquivoIn >> dados) // será repetido enquanto for possível ter um valor
    {
      cout << dados << " ";
    }
    arquivoIn.close();
  }
  cout << endl;
  arquivoIn.close();

  ifstream arquivoDados("dados.dat");
  float soma = 0.0;
  float num = 0;
  float valor;

  if (arquivoDados)
  {
    while (arquivoDados >> valor) // será repetido enquanto for possível ter um valor
    {
      soma += valor;
      num++;
    }
    cout << "Ha no total: " << num << " numeros. Com a soma de " << soma << endl;
    cout << "A media entre eles foi de: " << soma / num << endl;
  }
  else
  {
    cout << "O arquivo nao pode ser aberto!" << endl;
  }

  // ACRESCENTAR NO ARQUIVO
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