/*
Crie um programa que tenha uma scruct pessoa

A struct pessoa deve ter os seguintes campos:
- nome
- idade
- altura

O programa deve ler os dados de 5 pessoas e armazenar em um vetor com alocação dinâmica de pessoas.

E no final, perguntar se quer adicinoar mais pessoas.
Se sim, deve realocar o vetor e adicionar mais 5 pessoas. Fazendo isso dentro de uma função.
*/
#include <iostream>
#include <cstring> // para usar o memccpy
#include <algorithm> // para usar o copy
using namespace std;

struct Pessoa
{
  string nome;
  int idade;
  float altura;
};

void adicionarPessoas(Pessoa *&pessoas, int &tamanho)
{
  Pessoa *aux = new Pessoa[tamanho + 1];

  // forma com copy - mais recomendada
  copy(pessoas, pessoas + tamanho, aux);
  // de onde vem, até onde vai, para onde vai3

  // forma com memccpy - boa também
  memccpy(pessoas, aux, tamanho, sizeof(Pessoa));
  // de onde vem, para onde vai, tamanho, tamanho de cada elemento

  // forma com for - não recomendada por ser menos eficiente
  for (int i = 0; i < tamanho; i++)
  {
    aux[i] = pessoas[i];
  }

  delete[] pessoas;
  pessoas = aux;
  tamanho += 1;
}

/*// fazendo com return
Pessoa *adicionarPessoas(Pessoa *pessoas, int tamanho)
{
  Pessoa *aux = new Pessoa[tamanho + 1];

  copy(pessoas, pessoas + tamanho, aux);

  delete[] pessoas;
  pessoas = aux;
  tamanho += 1;

  return pessoas;
}
*/

int main()
{
  Pessoa *pessoas = new Pessoa[5];
  int tamanho = 5;

  for (int i = 0; i < tamanho; i++)
  {
    cout << "Digite o nome da pessoa " << i + 1 << ": ";
    cin >> pessoas[i].nome;
    cout << "Digite a idade da pessoa " << i + 1 << ": ";
    cin >> pessoas[i].idade;
    cout << "Digite a altura da pessoa " << i + 1 << ": ";
    cin >> pessoas[i].altura;
  }

  char opcao;
  cout << "Deseja adicionar mais pessoas? (s/n) ";
  cin >> opcao;

  if (opcao == 's')
  {
    // forma com void
    adicionarPessoas(pessoas, tamanho);

    // forma com return
    // pessoas = adicionarPessoas(pessoas, tamanho);

    for (int i = 5; i < tamanho; i++)
    {
      cout << "Digite o nome da pessoa " << i + 1 << ": ";
      cin >> pessoas[i].nome;
      cout << "Digite a idade da pessoa " << i + 1 << ": ";
      cin >> pessoas[i].idade;
      cout << "Digite a altura da pessoa " << i + 1 << ": ";
      cin >> pessoas[i].altura;
    }
  }

  for (int i = 0; i < tamanho; i++)
  {
    cout << "Pessoa " << i + 1 << endl;
    cout << "Nome: " << pessoas[i].nome << endl;
    cout << "Idade: " << pessoas[i].idade << endl;
    cout << "Altura: " << pessoas[i].altura << endl;
  }

  delete[] pessoas;

  return 0;
}
