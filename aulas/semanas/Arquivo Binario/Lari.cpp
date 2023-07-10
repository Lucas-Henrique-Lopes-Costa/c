// faça um programa que leia um arquivo binario, armazene em um scruct e mostre na tela
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
  ifstream arquivoBinario("produtos.bin", ios::binary);

  if (!arquivoBinario.is_open())
  {
    cout << "Erro ao abrir o arquivo binario" << endl;
    return 1;
  }

  // le TODOS os produtos do arquivo binario
  Produto produto[300];
  int quantidadeProdutos = 0;

  while (arquivoBinario.read((char *)&produto[quantidadeProdutos], sizeof(Produto)))
  {
    quantidadeProdutos++;
  }

  // mostra os produtos na tela
  cout << "id: " << produto[quantidadeProdutos - 1].id << endl;
  cout << "nome: " << produto[quantidadeProdutos - 1].nome << endl;
  cout << "preco: " << produto[quantidadeProdutos - 1].preco << endl;
  cout << "quantidade: " << produto[quantidadeProdutos - 1].quantidade << endl;
  cout << "fabricante: " << produto[quantidadeProdutos - 1].fabricante << endl;
  cout << "anoCriacao: " << produto[quantidadeProdutos - 1].anoCriacao << endl;
  cout << "descricao: " << produto[quantidadeProdutos - 1].descricao << endl;
  cout << endl;

  return 0;
}