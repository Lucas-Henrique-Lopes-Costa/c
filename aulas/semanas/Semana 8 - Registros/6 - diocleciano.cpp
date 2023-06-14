/*
  Seu Diocleciano Tartarana resolveu organizar uma festa de São João.
  Ele enviou um email informando que cada compadre deverá trazer dois alimentos (bebidas ou comidas).
  A quantidade de cada alimento deverá ser definida pelo compadre.
  Faça um programa que leia o nome de cada compadre e o nome dos dois alimentos e suas respectivas quantidades.
  O programa deverá gerar uma lista com o nome de todos os alimentos e as quantidades acumuladas.
  Obs: Os nomes dos compadres e alimentos não possuem espaço. A ordem de impressão dos alimentos deverá ser a mesma ordem de entrada.
*/

#include <iostream>
using namespace std;

struct compadre
{
  string nome;
  string alimento1;
  int qtdAlimento1;
  string alimento2;
  int qtdAlimento2;
};

struct alimento
{
  string nome;
  int qtd;
};

int main()
{
  int n;
  cin >> n;

  compadre compadres[n];
  alimento alimentos[n * 2];

  for (int i = 0; i < n; i++)
  {
    cin >> compadres[i].nome;
    cin >> compadres[i].alimento1;
    cin >> compadres[i].qtdAlimento1;
    cin >> compadres[i].alimento2;
    cin >> compadres[i].qtdAlimento2;

    alimentos[i * 2].nome = compadres[i].alimento1;
    alimentos[i * 2].qtd = compadres[i].qtdAlimento1;

    alimentos[i * 2 + 1].nome = compadres[i].alimento2;
    alimentos[i * 2 + 1].qtd = compadres[i].qtdAlimento2;
  }

  // agrupando os mesmos itens da lista
  for (int i = 0; i < n * 2; i++)
  {
    for (int j = i + 1; j < n * 2; j++)
    {
      if (alimentos[i].nome == alimentos[j].nome)
      {
        alimentos[i].qtd += alimentos[j].qtd;
        alimentos[j].qtd = 0;
      }
    }
  }

  // imprimindo a lista
  for (int i = 0; i < n * 2; i++)
  {
    if (alimentos[i].qtd > 0)
    {
      cout << alimentos[i].nome << " " << alimentos[i].qtd << endl;
    }
  }

  return 0;
}