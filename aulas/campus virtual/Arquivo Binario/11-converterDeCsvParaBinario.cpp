// faça um programa que converta um arquivo csv com , como separador para um arquivo binário

// Exemplo de Dados:
/*
Indentificador;Nome;Preco;Quantidade;Fabricante;Ano de criacao;Descricao do produto
1;iPhone 12;799.99;50;Apple;2020;O iPhone 12 e um smartphone poderoso, com processador A14 Bionic, camera dupla de 12MP, tela Super Retina XDR de 6,1 polegadas e suporte para 5G.
2;Samsung Galaxy S21;899.99;30;Samsung;2021;O Samsung Galaxy S21 e um smartphone topo de linha, com processador Exynos 2100, camera tripla de 12MP, tela Dynamic AMOLED 2X de 6,2 polegadas e suporte para 5G.
3;3Google Pixel 5;699.99;20;Google;2020;O Google Pixel 5 e um smartphone com camera de 12,2MP, tela OLED de 6 polegadas, processador Snapdragon 765G e integracao com os servicos do Google.
4;OnePlus 9 Pro;899.99;15;OnePlus;2021;O OnePlus 9 Pro e um smartphone com camera Hasselblad de 48MP, tela Fluid AMOLED de 6,7 polegadas, processador Snapdragon 888 e suporte para 5G.
5;Xiaomi Mi 11;699.99;25;Xiaomi;2021;O Xiaomi Mi 11 e um smartphone com camera tripla de 108MP, tela AMOLED de 6,81 polegadas, processador Snapdragon 888 e carregamento rapido de 55W.
*/
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Produto
{
  int id;
  char nome[30];
  float preco;
  int quantidade;
  char fabricante[10];
  int anoCriacao;
  char descricao[230];
};

int main()
{
  ifstream arquivoCsv("produtos.csv");
  ofstream arquivoBinario("produtos.bin", ios::binary);

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
    Produto produto;

    int posicao = 0;
    int posicaoAnterior = 0;
    int tamanho = 0;

    // id
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    produto.id = stoi(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // nome
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    strcpy(produto.nome, linha.substr(posicaoAnterior, tamanho).c_str());
    posicaoAnterior = posicao + 1;

    // preco
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    produto.preco = stof(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // quantidade
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    produto.quantidade = stoi(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // fabricante
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    strcpy(produto.fabricante, linha.substr(posicaoAnterior, tamanho).c_str());
    posicaoAnterior = posicao + 1;

    // anoCriacao
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    produto.anoCriacao = stoi(linha.substr(posicaoAnterior, tamanho));
    posicaoAnterior = posicao + 1;

    // descricao
    posicao = linha.find(';', posicaoAnterior);
    tamanho = posicao - posicaoAnterior;
    strcpy(produto.descricao, linha.substr(posicaoAnterior, tamanho).c_str());
    posicaoAnterior = posicao + 1;

    arquivoBinario.write((char *)&produto, sizeof(Produto));

    cout << "Produto " << produto.id << " convertido" << endl;
  }

  return 0;
}