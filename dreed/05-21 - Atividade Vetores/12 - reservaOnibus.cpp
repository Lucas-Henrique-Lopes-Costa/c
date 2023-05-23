#include <iostream>
using namespace std;

int main()
{
  /*
    Uma empresa de ônibus está disponibilizando oito veículos para uma viagem para Aparecida do Norte no feriado de 12 de outubro. O funcionário da empresa possui em um papel uma tabela com uma linha e oito colunas, onde ele deve escrever o nome da pessoa que reservar cada ônibus. Obs: antes de colocar os nomes, a tabela tem a palavra "disponivel" em cada célula.

    As pessoas reservam os ônibus informando o número dele (de 0 a 7) e seu primeiro nome. Se o número informado não estiver reservado, o nome da pessoa é escrito na tabela, caso contrário, ele fica sem reserva de ônibus.

    Faça um programa que tenha um vetor para representar a tabela citada acima. O programa deverá receber da entrada padrão uma sequência de nomes e números de ônibus e preencher o vetor conforme a tabela é preenchida. O programa deverá também contabilizar o número de pedidos de reserva não atendidos. Por fim, o vetor e o número de pedidos não atendidos devem ser exibidos na saída padrão.

    Entrada:

    Sequência de nomes e números de ônibus (0 a 7). Obs: os dados devem ser lidos até que seja informada a palavra "fim" como nome.
    Saída:

    Vetor com os nomes das pessoas que reservaram os ônibus.
    Quantidade de pedidos de reserva não atendidos.
    Exemplo de entrada:

    Joao 6
    Pedro 6
    Maria 6
    Jose 6
    Joaquim 6
    fim -1
    Exemplo de saída:

    disponivel
    Jose
    Pedro
    Joao
    disponivel
    disponivel
    Maria
    disponivel
    1
  */

  // criando o vetor
  string vetor[8];

  // preenchendo o vetor com "disponivel"
  for (int i = 0; i < 8; i++)
  {
    vetor[i] = "disponivel";
  }

  // lendo os nomes e números de ônibus
  int naoAtendidos = 0;
  bool parada = true;

  while (parada)
  {
    string nome;
    int numero;

    cin >> nome;

    if (nome == "fim")
    {
      parada = false;
    }

    cin >> numero;

    if (vetor[numero] == "disponivel")
    {
      vetor[numero] = nome;
    }
    else
    {
      naoAtendidos++;
    }
  }

  // exibindo o vetor e o número de pedidos não atendidos
  for (int i = 0; i < 8; i++)
  {
    cout << vetor[i] << endl;
  }

  cout << naoAtendidos - 1 << endl;

  return 0;
}