/*
A Polícia Federal (PF) desencadeu uma série de operações e descobriu o envolvimento de políticos em diversas atividades de corrupção. Para acompanhar o momento político do Brasil, você resolveu criar um programa, armazenando as seguintes informações: i) um registro para armazenar políticos e seu respectivo partido ii) um registro para armazenar o nome de uma operação da PF, nome do político envolvido e valor apontado como desviado por esse político. Seu objetivo agora é, dado um partido e uma operação da PF, apontar o valor total desviado pelos membros do partido conforme apontado nessa operação.

Entradas:
Quantidade de políticos a serem cadastrados.
Dados partidários de políticos: uma relação contendo nome do partido e nome do político. Considere que não há espaços no nome do político e do partido.
Quantidade de operações da polícia federal a serem cadastrados.
Dados de operações da polícia federal: uma relação contendo nome da operação, nome do político e valor desviado em milhares de reais. Considere que não há espaços no nome do político e da operação. O valor desviado deverá ser armazenado como um inteiro.
Nome de um partido e de uma operação para a busca.

Saídas:
Valor total desviado pelo partido em uma dada operação da PF.

Exemplo de Entrada:
8
PXDB Piolho
PXDB Renaldinho
PXDB Foice
XTZ Esnosso
XTZ Trazano
PRDB Nuenão
PRDB Abobra
PP Fulanto
13
Lava-Jato Fulanto 100
Lava-Jato Nuenão 200
Lava-Jato Esnosso 150
Lava-Jato Trazano 150
Lava-Jato Foice 300
Lava-Jato Renaldinho 200
Destrocos Piolho 100
Destrocos Foice 200
Gazolina Foice 200
Gazolina Renaldinho 100
Gazolina Nuenão 300
Pepino Trazano 100
Pepino Abobra 150
PXDB Lava-Jato

Exemplo de Saída:
500
*/

#include <iostream>
using namespace std;

struct Politicos
{
  string nome;
  string partido;
};

struct Operacoes
{
  string nomeOperacao;
  string politico;
  int desviado;
};

int main()
{
  int n;
  cin >> n;

  Politicos politico[n];

  for (int i = 0; i < n; i++)
  {
    cin >> politico[i].partido;
    cin >> politico[i].nome;
  }

  int operacao;
  cin >> operacao;

  Operacoes operacoes[operacao];

  for (int i = 0; i < operacao; i++)
  {
    cin >> operacoes[i].nomeOperacao;
    cin >> operacoes[i].politico;
    cin >> operacoes[i].desviado;
  }

  string partido;
  cin >> partido;

  string nomeOperacao;
  cin >> nomeOperacao;

  float total = 0;

  for (int i = 0; i < operacao; i++)
  {
    if (operacoes[i].nomeOperacao == nomeOperacao)
    {
      // procura qual o partido daquele politico
      for (int j = 0; j < n; j++)
      {
        if (operacoes[i].politico == politico[j].nome)
        {
          if (politico[j].partido == partido)
          {
            total += operacoes[i].desviado;
          }
        }
      }
    }
  }

  cout << total << endl;

  return 0;
}