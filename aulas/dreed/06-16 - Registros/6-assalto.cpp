/*
Após a aposentadoria do Batman, Gotham City tem sofrido vários ataques a bancos, joalherias e outros empreendimentos de altos valores. Muitos vilões, inclusive, se uniram em um mesmo plano para tentar saquear a cidade. Para auxiliar a cidade, a polícia decidiu contratar um especialista para criar um programa que armazene as seguintes informações: i) um registro para armazenar vilões e seus respectivos alvo ii) um registro para armazenar o nome do plano, nome do vilão envolvido e montante total de prejuízo causado por esse vilão. Seu objetivo agora é, dado um alvo e um plano, apontar o valor total de prejuízo causado pelos vilões envolvidos nesse plano.

Entradas:
Quantidade de vilões a serem cadastrados.
Uma relação contendo nome do vilão e seu alvo. Considere que não há espaços no nome do vilão e do alvo.
Quantidade de planos a serem cadastrados.
Uma relação contendo nome do plano, nome do vilão e prejuízo causado por ele. Considere que não há espaços no nome do vilão e do plano. O prejuízo causado deverá ser armazenado como um inteiro.
Nome de um alvo para a busca.

Saídas:
Nomes dos planos e valor do prejuízo causado pelo(s) vilão(ões). Caso um plano tenha mais de uma vilão que tenha como objetivo o mesmo alvo, ambos devem aparecer na saída. Caso não haja nenhum plano, deve ser impresso -1.

Exemplo de Entrada:
8
Coringa BancoCentral
Coringa JoalheriaZil
Pinguim JoalheriaZil
Charada BancoCentral
Charada BancoFolz
Espantalho JoalheriaZil
Espantalho MuseuExpo
DrFrio SeguradoraAliz
13
AgoraVai Pinguim 100
MaisUmaVez Pinguim 100
NovaTentativa Pinguim 200
DeNovo Coringa 212
ElDorado Coringa 105
DeNovo Charada 150
EMinha Charada 300
DeNovo Dalton 150
LavasVesuvio Pinguim 200
LavasVesuvio MadameMin 50
EMinha Espantalho 200
ElDorado Espantalho 300
ElDorado Pinguim 150
BancoCentral 

Exemplo de Saída:
DeNovo 212
ElDorado 105
DeNovo 150
EMinha 300
*/

#include <iostream>
using namespace std;

struct Viloes
{
  string nome;
  string alvo;
};

struct Plano
{
  string nomePlano;
  string nomeVilao;
  int prejuizo;
};

int main()
{
  int n;
  cin >> n;

  Viloes viloes[n];

  for (int i = 0; i < n; i++)
  {
    cin >> viloes[i].nome >> viloes[i].alvo;
  }

  int assaltos;
  cin >> assaltos;

  Plano planos[assaltos];

  for (int i = 0; i < assaltos; i++)
  {
    cin >> planos[i].nomePlano >> planos[i].nomeVilao >> planos[i].prejuizo;
  }

  string alvo;
  cin >> alvo;

  // achar os nomes do vilão que vai assaltar o alvo
  string nomesViloes[assaltos];
  int contador = 0;

  for (int i = 0; i < n; i++)
  {
    if (viloes[i].alvo == alvo)
    {
      nomesViloes[contador] = viloes[i].nome;
      contador++;
    }
  }

  // verificar em quais dos assaltos tem o vilão e imprimir o nome do plano e o prejuízo
  bool temAssalto = false;
  for (int i = 0; i < assaltos; i++)
  {
    for (int j = 0; j < contador; j++)
    {
      if (planos[i].nomeVilao == nomesViloes[j])
      {
        cout << planos[i].nomePlano << " " << planos[i].prejuizo << endl;
        temAssalto = true;
      }
    }
  }

  if (!temAssalto)
  {
    cout << -1 << endl;
  }

  return 0;
}