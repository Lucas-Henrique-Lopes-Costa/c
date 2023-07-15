#include <iostream>
#include <fstream>
using namespace std;

void removendoDuplicatas(string vetor[], int tamanho)
{
  for (int k = 0; k < tamanho; k++)
  {
    for (int l = 0; l < tamanho; l++)
    {
      if (vetor[k] == vetor[l] and k != l)
      {
        vetor[l] = "";
      }
    }
  }
}

int main()
{
  // Vocês deve considerando dois arquivos ordenados, devemos gerar um arquivo C que tenha somente os itens que tem no arquivo B e que estejam em A

  // inicializando os arquivos
  string nomeArquivoA;
  string nomeArquivoB;
  cout << "Bem Vindo, Padawan! Comparar dois arquivos e gerar um terceiro com os valores que estão nos dois." << endl;

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
  removendoDuplicatas(vetorB, j);

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
  removendoDuplicatas(vetorA, i);

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