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

  // imprimindo os dados do arquivo
  for (int i = 0; i < estoqueReal; i++)
  {
    cout << "Celular " << i + 1 << endl;
    cout << "Identificador: " << nome[i].identificador << endl;
    cout << "Nome: " << nome[i].nome << endl;
    cout << "Preco: " << nome[i].preco << endl;
    cout << "Quantidade: " << nome[i].quantidade << endl;
    cout << "Fabricante: " << nome[i].fabricante << endl;
    cout << "Ano de criacao: " << nome[i].anoCriacao << endl;
    cout << "Descricao: " << nome[i].descricao << endl;
    cout << endl;
  }
  
  return 0;
}