#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Os alunos do curso de FP (Futurologia Aplicada) estão organizando uma eleição para a escolha dos membros da próxima gestão do Centro Acadêmico. A campanha foi bem animada com as duas chapas concorrentes fazem seu melhor para ganhar a confiança dos alunos.

    Os organizadores da eleição pediram a você para criar um programa que faça a contabilização dos votos. Eles anotaram em um arquivo eleicao.txt os dados que você terá para indicar a chapa vencedora usando seu programa. Na folha eles colocaram: os nomes das duas chapas concorrentes, a quantidade de locais de votação e depois, em cada linha, o local de votação, a quantidade de votos da primeira chapa informada e a quantidade de votos da segunda chapa. Seu programa deverá ser capaz de ler essas informações e exibir na tela: o nome da chapa vencedora, o total de votos e a porcentagem de votos obtidos por ela. Obs: considere que nunca ocorrerá empate na eleição.

    Entradas (arquivo eleicao.txt):

    Os nomes das duas chapas concorrentes (na mesma linha).
    Em cada linha os dados de um local de votação sendo eles: o nome do local, a quantidade de votos da primeira chapa e a quantidade de votos da segunda.
    Saídas:

    O nome da chapa vencedora.
    O total de votos obtidos pela chapa vencedora.
    A porcentagem de votos obtidos pela chapa vencedora (valor em ponto flutuante com duas casas decimais, entre 0 e 100).
    Exemplo de Entrada (arquivo eleicao.txt):

    DeVoltaParaOFuturo StarTrek
    entreprise 15 90
    delorean 105 40
    brejao 40 40
    Exemplo de Saída:

    StarTrek
    170
    51.52
    Exemplo de Entrada (arquivo eleicao.txt):

    ehNois usMano
    restaurante 20 25
    pavilhao 40 0
    departamento 50 50
    portaria 10 5
    Exemplo de Saída:

    ehNois
    120
    60.00
  */

  ifstream arquivo("eleicao.txt");

  string chapa1, chapa2, local;
  arquivo >> chapa1 >> chapa2;

  int votos1, votos2, total1 = 0, total2 = 0;

  while (arquivo >> local >> votos1 >> votos2)
  {
    total1 += votos1;
    total2 += votos2;
  }

  if (total1 > total2)
  {
    cout << chapa1 << endl;
    cout << total1 << endl;
    cout << fixed << setprecision(2) << (float)total1 / (total1 + total2) * 100 << endl;
  }
  else
  {
    cout << chapa2 << endl;
    cout << total2 << endl;
    cout << fixed << setprecision(2) << (float)total2 / (total1 + total2) * 100 << endl;
  }

  return 0;
}
