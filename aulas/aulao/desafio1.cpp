#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  /*
    Vocês deve considerando dois arquivos ordenados, devemos gerar um arquivo C que tenha somente os itens que tem no arquivo B e que estejam em A
  */

  // inicializando os arquivos
  string nomeArquivoA;
  string nomeArquivoB;

  cout << "Escreva os nomes do aquivo A: ";
  cin >> nomeArquivoA;

  ifstream arquivoA(nomeArquivoA);

  if (!arquivoA.is_open())
  {
    cout << "Erro ao abrir o arquivo A" << endl;
    return 0;
  }

  cout << "Escreva os nomes do aquivo B: ";
  cin >> nomeArquivoB;

  ifstream arquivoB(nomeArquivoB);

  if (!arquivoB.is_open())
  {
    cout << "Erro ao abrir o arquivo B" << endl;
    return 0;
  }

  ofstream arquivoC("arquivoC.txt");

  // inicializando as variáveis
  string valorB;
  string valorA;

  // passando B para um vetor
  string vetorB[100];
  int j = 0;

  while (!arquivoB.eof())
  {
    arquivoB >> valorB;
    vetorB[j] = valorB;
    j++;
  }

  // tirando valores repetidos do vetor B
  for (int k = 0; k < j; k++)
  {
    for (int l = 0; l < j; l++)
    {
      if (vetorB[k] == vetorB[l] and k != l)
      {
        vetorB[l] = "";
      }
    }
  }

  // passando A para um vetor
  string vetorA[100];
  int i = 0;

  while (!arquivoA.eof())
  {
    arquivoA >> valorA;
    vetorA[i] = valorA;
    i++;
  }

  // tirando valores repetidos do vetor A
  for (int k = 0; k < j; k++)
  {
    for (int l = 0; l < j; l++)
    {
      if (vetorA[k] == vetorA[l] and k != l)
      {
        vetorA[l] = "";
      }
    }
  }

  // comparando os vetores
  for (int k = 0; k < i; k++)
  {
    for (int l = 0; l < j; l++)
    {
      // se forem iguais, escreve no arquivo C
      if (vetorA[k] == vetorB[l])
      {
        // cout << "Comparando: " << vetorA[k] << " com " << vetorB[l] << endl;
        arquivoC << vetorA[k] << " ";
      }
    }
  }

  cout << "Arquivo C gerado com sucesso!" << endl;

  // fechando os arquivos
  arquivoA.close();
  arquivoB.close();
  arquivoC.close();

  return 0;
}