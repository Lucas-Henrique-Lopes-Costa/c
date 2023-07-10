#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Funcionario
{
  long long cpf;
  char nome[200];
  int dia;
  int mes;
  int ano;
  char cargo[200];
  float salario;
  long long telefone;
  char endereco[200];
};

int main()
{
  ifstream arquivoCsv("funcionarios.csv");
  ofstream arquivoBinario("funcionarios.bin", ios::binary);

  if (!arquivoCsv.is_open())
  {
    cout << "Erro ao abrir o arquivo csv" << endl;
    return 1;
  }

  if (!arquivoBinario.is_open())
  {
    cout << "Erro ao abrir o arquivo binario" << endl;
    return 1;
  }

  string linha;
  getline(arquivoCsv, linha); // pula a primeira linha

  while (getline(arquivoCsv, linha))
  {
    Funcionario funcionario;

    int posicao = 0;
    int posicaoAnterior = 0;
    int tamanho = 0;

    // cpf
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    funcionario.cpf = stoll(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // nome
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    strcpy(funcionario.nome, linha.substr(posicaoAnterior, tamanho).c_str());
    posicaoAnterior = posicao + 1;

    // dia
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    funcionario.dia = stoi(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // mes
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    funcionario.mes = stoi(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // ano
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    funcionario.ano = stoi(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // cargo
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    strcpy(funcionario.cargo, linha.substr(posicaoAnterior, tamanho).c_str());
    posicaoAnterior = posicao + 1;

    // salario
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    funcionario.salario = stof(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // telefone
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    funcionario.telefone = stoll(linha.substr(posicaoAnterior, tamanho));

    // endereco
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    strcpy(funcionario.endereco, linha.substr(posicaoAnterior, tamanho).c_str());

    arquivoBinario.write((char *)&funcionario, sizeof(Funcionario));

    cout << "Funcionario " << funcionario.nome << " adicionado" << endl;
  }

  return 0;
}