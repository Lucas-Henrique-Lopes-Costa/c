// aplicação para sorteio de atividades
// para uma lista de alunos

// recebe arquivo com nome dos alunos
// e relação arquivos com atividades

// devolve relação de alunos em arquivo
// com exercícios atribuídos a cada um

// modificado em 2021 para realizar sorteio mais justo para poucas opções
// inspirado em sorteios utilizados em jogos
//
// objetivo é tentar manter equidade entre opções
// sorteadas, mesmo com poucos lançamentos
//
// by Joaquim Uchôa, 2021

// melhoria em 2022: considerar linhas começando com # como separador de turma

// adaptação em 2022: remoção do uso de classes para facilitar compreensão por
// alunos de Introdução aos Algoritmos (GAC109, GAC124)

#include <random>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stdexcept>

using namespace std;

unsigned mdc(unsigned m, unsigned n)
{
  while (n != 0)
  {
    unsigned t = m % n;
    m = n;
    n = t;
  }
  return m;
}

unsigned mdc(unsigned *vetor, unsigned tamanho)
{
  if (tamanho < 2)
    return vetor[0];
  else if (tamanho == 2)
    return mdc(vetor[0], vetor[1]);
  else
  {
    unsigned t = mdc(vetor[0], vetor[1]);
    for (unsigned i = 2; i < tamanho; i++)
      t = mdc(t, vetor[i]);
    return t;
  }
}

unsigned mmc(int a, int b)
{
  return (a / mdc(a, b)) * b;
}

unsigned mmc(unsigned *vetor, unsigned tamanho)
{
  if (tamanho < 2)
    return vetor[0];
  else if (tamanho == 2)
    return mmc(vetor[0], vetor[1]);
  else
  {
    unsigned t = mmc(vetor[0], vetor[1]);
    for (unsigned i = 2; i < tamanho; i++)
      t = mmc(t, vetor[i]);
    return t;
  }
}

double sorteiaValor()
{
  return double(rand()) / double(RAND_MAX);
}

unsigned escolhePosicaoPorFatia(unsigned *vetorModificado, unsigned total, unsigned tamanho)
{
  bool encontrou = false;
  double sorteio = sorteiaValor();

  unsigned posicao = 0;
  double porcaoSuperior = 0.0;

  while ((not encontrou) and (posicao < tamanho - 1))
  {
    porcaoSuperior += (double(vetorModificado[posicao]) / double(total));
    if (sorteio < porcaoSuperior)
      encontrou = true;
    else
      posicao++;
  }

  return posicao;
}

unsigned preparaVetorParaSorteio(unsigned *vetorOriginal, unsigned *vetorModificado, unsigned tamanho)
{
  unsigned mmcV = mmc(vetorOriginal, tamanho);
  unsigned soma = 0;

  for (unsigned i = 0; i < tamanho; i++)
  {
    vetorModificado[i] = (mmcV / vetorOriginal[i]);
    soma += vetorModificado[i];
  }
  return soma;
}

unsigned realizaSorteioPorFatia(unsigned *vetorQuestoes, unsigned tamanho)
{
  unsigned *vetorModificado = new unsigned[tamanho];
  unsigned *vetorCopia;

  bool temZero = false;
  unsigned posicao = 0;
  while ((posicao < tamanho) and (not temZero))
  {
    temZero = (vetorQuestoes[posicao] == 0);
    posicao++;
  }

  if (not temZero)
  {
    vetorCopia = vetorQuestoes;
  }
  else
  {
    vetorCopia = new unsigned[tamanho];
    for (unsigned i = 0; i < tamanho; i++)
      vetorCopia[i] = vetorQuestoes[i] + 1;
  }

  unsigned total = preparaVetorParaSorteio(vetorCopia, vetorModificado, tamanho);
  unsigned posicaoSorteada = escolhePosicaoPorFatia(vetorModificado, total, tamanho);
  vetorQuestoes[posicaoSorteada]++;

  delete[] vetorModificado;
  if (temZero)
    delete[] vetorCopia;
  return posicaoSorteada;
}

// estrutura que armazena uma determinada atividade e as posições já sorteadas
struct atividade
{
  unsigned numeroDeEnunciados;
  unsigned *posicoesSorteadas;
  string *vetorDeEnunciados;
};

void lerDadosDoArquivo(const string &nomeDoArquivo, atividade *umaAtividade)
{
  ifstream arquivoDaAtividade(nomeDoArquivo);
  if (not arquivoDaAtividade)
  {
    cerr << "Arquivo de atividades não pode ser aberto: "
         << endl
         << nomeDoArquivo << endl;
    throw runtime_error("Falha na abertura do arquivo de atividades");
  }
  arquivoDaAtividade >> umaAtividade->numeroDeEnunciados;

  arquivoDaAtividade.ignore();

  umaAtividade->vetorDeEnunciados = new string[umaAtividade->numeroDeEnunciados];
  for (unsigned i = 0; i < umaAtividade->numeroDeEnunciados; i++)
  {
    getline(arquivoDaAtividade, umaAtividade->vetorDeEnunciados[i]);
  }

  umaAtividade->posicoesSorteadas = new unsigned[umaAtividade->numeroDeEnunciados];
  for (unsigned i = 0; i < umaAtividade->numeroDeEnunciados; i++)
    umaAtividade->posicoesSorteadas[i] = 0;
}

string sorteiaPorFaixa(atividade *umaAtividade)
{
  unsigned posicaoSorteada = realizaSorteioPorFatia(umaAtividade->posicoesSorteadas,
                                                    umaAtividade->numeroDeEnunciados);
  return umaAtividade->vetorDeEnunciados[posicaoSorteada];
}

void atribui_questoes(string nomeAluno, atividade *vetorAtividades, int numeroDeAtividades)
{
  cout << nomeAluno;
  for (int i = 0; i < numeroDeAtividades; i++)
    cout << ", " << sorteiaPorFaixa(&vetorAtividades[i]);

  cout << endl;
}

void usoDoPrograma(char *nomePrograma)
{
  cout << "Use o programa da seguinte forma: \n"
       << " $> " << nomePrograma << " {ARQUIVO_ALUNOS} {ARQUIVO_ATIVIDADES 1} ... {ARQUIVO_ATIVIDADES n} {SEMENTE}\n\n"
       << " Descricao dos parametros de entrada: \n"
       << "{ARQUIVO_ATIVIDADES} -> caminho completo para o arquivo com atividades cadastradas.\n"
       << "{ARQUIVO_ALUNOS} -> caminho completo para o arquivo com os alunos cadastrados.\n"
       << "{SEMENTE} -> semente utilizada para o gerador aleatório de numeros." << endl;
}

int main(int argc, char *argv[])
{
  system("clear||cls");
  
  if (argc < 4)
  {
    std::cerr << "Chamada invalida." << std::endl;
    usoDoPrograma(argv[0]);
    return -1;
  }

  string nomeArqAlunos = argv[1];

  ifstream arquivoAlunos(nomeArqAlunos);
  if (not arquivoAlunos)
  {
    cerr << "Arquivo de alunos não pode ser aberto" << endl
         << nomeArqAlunos << endl;
    throw runtime_error("Falha na abertura do arquivo");
  }

  // quantidade de atividades é dada pelo número de parâmetros
  // menos nome do programa, nome do arquivo dos alunos e semente
  unsigned numeroDeAtividades = argc - 3;

  atividade vetorDeAtividades[numeroDeAtividades];

  for (unsigned i = 0; i < numeroDeAtividades; i++)
  {
    lerDadosDoArquivo(argv[i + 2], &vetorDeAtividades[i]);
  }

  unsigned seed = atoi(argv[argc - 1]);
  srand(seed);

  string nomeAluno;
  while (getline(arquivoAlunos, nomeAluno))
  {
    if (nomeAluno[0] != 0 and nomeAluno[0] != ' ' and nomeAluno[0] != '#')
      atribui_questoes(nomeAluno, vetorDeAtividades, numeroDeAtividades);
    else
      cout << nomeAluno << endl;
  }

  return 0;
}
