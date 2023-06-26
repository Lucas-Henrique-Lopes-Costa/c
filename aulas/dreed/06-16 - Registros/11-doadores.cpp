/*
Faça um programa que leia​ n doadores de sangue (nome e tipo sanguíneo), e guarde essas informações em um registro. Após isso, seu programa deverá ler um determinado tipo sanguíneo. O algoritmo deve então mostrar quais pessoas podem doar sangue para este tipo sanguíneo seguindo uma ordem de melhor compatibilidade, que é definida pelas seguintes regras:

Para um paciente que necessita do tipo sanguíneo A, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: A e O. 
Para um paciente que necessita do tipo sanguíneo B, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: B e O. 
Para um paciente que necessita do tipo sanguíneo AB, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: AB, A, B e O. 
Para um paciente que necessita do tipo sanguíneo O, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: O. 
Obs.: Registros em Python são implementados como dicionários

Entradas:
Um número inteiro (int) que represente a quantidade de doadores.
Nome do doador e tipo sanguíneo (ambos string, serão lidos na mesma linha).
Tipo sanguíneo do receptor (string).

Saída:
Nome das pessoas que podem doar sangue para o tipo especificado, seguindo a ordem de melhor compatibilidade (um por linha).
Obs.: Se existirem duas ou mais pessoas com o mesmo tipo sanguíneo e que possam doar, exibir o nome dessas pessoas na ordem em que os dados foram lidos.

Exemplo de Entrada:
10
Jorge O
Luiza AB
Sara A
Elder B
Matheus A
Gabriela AB
Lais A
Talita O
Simone O
Ana AB
AB

Exemplo de Saída:
Luiza
Gabriela
Ana
Sara
Matheus
Lais
Elder
Jorge
Talita
Simone
*/

#include <iostream>
using namespace std;

struct Doador
{
  string nome;
  string tipo;
};

int main()
{
  int n;
  cin >> n;

  Doador doadores[n];

  for (int i = 0; i < n; i++)
  {
    cin >> doadores[i].nome >> doadores[i].tipo;
  }

  string tipo;
  cin >> tipo;

  if (tipo == "A")
  {
    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "A")
      {
        cout << doadores[i].nome << endl;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "O")
      {
        cout << doadores[i].nome << endl;
      }
    }
  }
  else if (tipo == "B")
  {
    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "B")
      {
        cout << doadores[i].nome << endl;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "O")
      {
        cout << doadores[i].nome << endl;
      }
    }
  }
  else if (tipo == "AB")
  {
    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "AB")
      {
        cout << doadores[i].nome << endl;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "A")
      {
        cout << doadores[i].nome << endl;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "B")
      {
        cout << doadores[i].nome << endl;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "O")
      {
        cout << doadores[i].nome << endl;
      }
    }
  }
  else if (tipo == "O")
  {
    for (int i = 0; i < n; i++)
    {
      if (doadores[i].tipo == "O")
      {
        cout << doadores[i].nome << endl;
      }
    }
  }
  
  
  return 0;
}
