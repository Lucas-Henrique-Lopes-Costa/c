#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
  /*
    Você e seu amigo saíram para jogar boliche no shopping, vocês apostaram em 10 rodadas e o vencedor da aposta será o jogador que obtiver a maior quantidade de strikes após as 10 rodadas. Ao final das rodadas jogadas, caso haja empate, uma nova rodada será realizada até que apenas um dos jogadores faça um strike e assim o mesmo será consolidado como o ganhador.

    Para contabilizar as rodadas, foi criado um sistema de pontos levando em consideração duas cores primarias VERMELHO e VERDE. A cor VERMELHA refere-se ao jogador que não pontuou na rodada e a cor VERDE refere-se que ao jogador que pontuou na rodada. Ou seja, caso o jogador tenha feito um strike a cor atribuída ao jogador será VERDE, caso contrário será VERMELHO.

    Crie um programa que receberá as pontuações de cada rodada do jogador 1 (você) e do jogador 2 (seu amigo), respectivamente, em um arquivo boliche.txt e mostre quem ganhou o jogo após todas as rodadas. Vale ressaltar que o ganhador do jogo será aquele que fez o maior número de strikes, ou seja, aquele que foi associado mais vezes a cor VERDE.

    Entradas:

    Arquivo boliche.txt com sequência de strings correspondentes as tentativas de strike do Jogador 1 (você) e do Jogador 2 (seu amigo), ao longo das rodadas. A sequência será fornecida uma palavra por vez (em linhas diferentes) e de forma intercalada entre os jogadores. Ou seja, a primeira string se refere ao Jogador 1, a segunda string ao Jogador 2, a terceira string ao Jogador 1, a quarta string ao Jogador 2, e assim sucessivamente. Note também que serão no mínimo dez rodadas, mas em casos de empate, a quantidade total de rodadas pode exceder este valor.
    Saídas:

    Mensagem Jogador 1 é o ganhador da aposta ou Jogador 2 é o ganhador da aposta.
    Exemplo de Entrada (arquivo boliche.txt):

    VERDE
    VERMELHO
    VERMELHO
    VERDE
    VERDE
    VERMELHO
    VERDE
    VERDE
    VERDE
    VERDE
    VERDE
    VERDE
    VERMELHO
    VERDE
    VERDE
    VERMELHO
    VERMELHO
    VERDE
    VERDE
    VERMELHO
    Exemplo de Saída:

    Jogador 1 é o ganhador da aposta
    Exemplo de Entrada (arquivo boliche.txt):

    VERDE
    VERMELHO
    VERMELHO
    VERDE
    VERDE
    VERMELHO
    VERDE
    VERDE
    VERDE
    VERDE
    VERDE
    VERDE
    VERMELHO
    VERDE
    VERDE
    VERMELHO
    VERMELHO
    VERDE
    VERMELHO
    VERDE
    Exemplo de Saída:

    Jogador 2 é o ganhador da aposta
    Exemplo de Entrada (arquivo boliche.txt):

    VERDE
    VERMELHO
    VERMELHO
    VERDE
    VERDE
    VERMELHO
    VERDE
    VERDE
    VERDE
    VERDE
    VERDE
    VERDE
    VERMELHO
    VERDE
    VERDE
    VERMELHO
    VERMELHO
    VERDE
    VERDE
    VERDE
    VERMELHO
    VERMELHO
    VERDE
    VERMELHO
    Exemplo de Saída:

    Jogador 1 é o ganhador da aposta
  */

  ifstream arquivoIn("boliche.txt");

  int contJogador1 = 0, contJogador2 = 0;

  string verifica1, verifica2;
  while (arquivoIn >> verifica1 >> verifica2)
  {
    if (verifica1 == "VERDE")
    {
      contJogador1++;
    }
    if (verifica2 == "VERDE")
    {
      contJogador2++;
    }
  }
  
  if (contJogador1 > contJogador2)
  {
    cout << "Jogador 1 é o ganhador da aposta" << endl;
  }
  else
  {
    cout << "Jogador 2 é o ganhador da aposta" << endl;
  }

  return 0;
}
