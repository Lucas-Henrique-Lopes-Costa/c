#include <iostream>
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
  for (int i = 0; i < tamanho; i++)
  {
    aux[i] = pessoas[i];
  }

  // copy(&pessoas[0], &pessoas[tamanho], aux);

  delete[] pessoas;
  pessoas = aux; // transfere o endereço dos vetores
  tamanho++;
}

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
  cout << "Deseja adicionar mais pessoas 5 pessoas? (s/n) ";
  cin >> opcao;

  if (opcao == 's')
  {
    adicionarPessoas(pessoas, tamanho);

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

}