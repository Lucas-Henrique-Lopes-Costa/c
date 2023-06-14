/*
  Papai Noel precisa de ajuda para montar a lista de crianças que merecem receber presentes neste Natal
  Para ajudá-lo nessa tarefa, crie um programa que receba um conjunto de registros com as informações de cada criança:
  nome da criança,
  presente desejado,
  quantidade de boas ações e
  quantidade de travessuras.
  O programa deverá então verificar quais crianças não merecem presentes (ou seja, fizeram mais travessuras que boas ações) e gerar a lista dos presentes que deverão ser dados.
  Obs.: os nomes das crianças e os presentes não possuem espaço.
  Caso nenhuma criança deva receber presentes, o programa deve imprimir a palavra "nada".
*/

#include <iostream>
using namespace std;

struct crianca
{
  string nome;
  string presente;
  int boasAcoes;
  int travessuras;
};

int main()
{
  // Lendo a quantidade de crianças
  int qtdCriancas;
  cin >> qtdCriancas;

  // Criando o vetor de crianças
  crianca criancas[qtdCriancas];
  for (int i = 0; i < qtdCriancas; i++)
  {
    cin >> criancas[i].nome;
    cin >> criancas[i].presente;
    cin >> criancas[i].boasAcoes;
    cin >> criancas[i].travessuras;
  }

  // Verificando quais crianças não merecem presentes
  bool temCrianca = false;
  for (int i = 0; i < qtdCriancas; i++)
  {
    if (criancas[i].boasAcoes >= criancas[i].travessuras)
    {
      cout << criancas[i].presente << " ";
      temCrianca = true;
    }
  }

  // Imprimindo a lista
  if (!temCrianca)
  {
    cout << "ninguem merece presentes";
  }

  cout << endl;

  return 0;
}
