#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  ifstream inputFile("dados.txt"); // Nome do arquivo de entrada
  if (!inputFile)
  {
    cerr << "Erro ao abrir o arquivo de entrada." << endl;
    return 1;
  }

  vector<string> numeros;
  string numero;

  // Lendo os números de telefone do arquivo
  while (getline(inputFile, numero))
  {
    numeros.push_back(numero);
  }

  inputFile.close();

  const int NUMEROS_POR_ARQUIVO = 20; // Quantidade de números por arquivo
  int arquivoAtual = 1;

  for (size_t i = 0; i < numeros.size(); i += NUMEROS_POR_ARQUIVO)
  {
    string nomeArquivo = "Nova Iguacu " + to_string(arquivoAtual) + ".csv";
    ofstream outputFile(nomeArquivo); // Nome do arquivo de saída

    if (!outputFile)
    {
      cerr << "Erro ao criar o arquivo " << nomeArquivo << endl;
      return 1;
    }

    // Escrevendo os números de telefone no arquivo de saída
    for (size_t j = i; j < i + NUMEROS_POR_ARQUIVO && j < numeros.size(); j++)
    {
      outputFile << numeros[j] << endl;
    }

    outputFile.close();
    arquivoAtual++;
  }

  cout << "Arquivos criados com sucesso!" << endl;

  return 0;
}
