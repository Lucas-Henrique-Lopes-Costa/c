#include <iostream>
#include <fstream>

using namespace std;

struct NomeDoMeuStruct
{
  int identificador;
  char nome[30];
  float preco;
  int quantidade;
  char fabricante[10];
  int anoCriacao;
  char descricao[230];
};

int main()
{
  // Leitura do arquivo
  ifstream arquivoIn("bancoDeDados.bin", ios::binary); // arquivo dentro da pasta output

  if (!arquivoIn.is_open())
  {
    cout << "Erro ao abrir o arquivo 'celulares.bin'!" << endl;
    return 0;
  }

  // utilizando struct com ponteiro para armazenar os dados do arquivo
  arquivoIn.seekg(0, ios::end);
  int tamanhoArquivo = arquivoIn.tellg();

  arquivoIn.seekg(0, ios::beg);

  int estoqueMax = tamanhoArquivo / sizeof(NomeDoMeuStruct);
  NomeDoMeuStruct *nome;
  nome = new NomeDoMeuStruct[estoqueMax];

  int estoqueReal = 0;
  string linha;

  while (estoqueReal < estoqueMax && arquivoIn.read((char *)&nome[estoqueReal], sizeof(NomeDoMeuStruct)))
  {
    estoqueReal++;
  }

  arquivoIn.close();

  // Importando os dados de um arquivo csv
  ifstream arquivoIn2("bancoDeDados.csv", ios::binary); // arquivo dentro da pasta output

  if (!arquivoIn2.is_open())
  {
    cout << "Erro ao abrir o arquivo 'celulares.csv'!" << endl;
    return 0;
  }

  // utilizando struct com ponteiro para armazenar os dados do arquivo
  arquivoIn2.seekg(0, ios::end);
  int tamanhoArquivo2 = arquivoIn2.tellg();

  arquivoIn2.seekg(0, ios::beg);
  
  // atualizando o atual struct para receber os novos dados do arquivo csv


  // lendo os dados do arquivo csv
  

  return 0;
}