#include <iostream>
using namespace std;

struct pessoa
{
  string nome;
  int idade;
  string cpf;
  float altura;
  string cor_olhos;
};

int main()
{
  pessoa individuo;
  cin >> individuo.nome;
  cin >> individuo.idade;
  cin >> individuo.cpf;
  cin >> individuo.altura;
  cin >> individuo.cor_olhos;
  
  cout << "Nome: " << individuo.nome << endl;
  cout << "Idade: " << individuo.idade << endl;
  cout << "CPF: " << individuo.cpf << endl;
  cout << "Altura: " << individuo.altura << endl;
  cout << "Cor dos olhos: " << individuo.cor_olhos << endl;
  return 0;
}
