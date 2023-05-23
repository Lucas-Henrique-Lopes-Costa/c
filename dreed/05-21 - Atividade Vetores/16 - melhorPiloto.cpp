#include <iostream>
using namespace std;

int main()
{
  /*
    Dois pilotos resolveram se desafiar para saber quem faz o melhor tempo no Autódromo Internacional de Lavras. Sabe-se que a cada km a partir do km 1 é registrado o tempo do piloto. Faça um programa que receba o nome do piloto e os tempos registrados a cada km pelo piloto e imprima quem estava na liderança a cada km e qual foi seu tempo naquele km. Considere que no km 0 o tempo é 0.

    Todas as comparações podem ser feitas supondo que não haverá empate.

    Entradas:

    Quantidade de km em que houve medição;
    nome do primeiro piloto;
    tempos do primeiro piloto em cada km (números reais, numa mesma linha);
    nome do segundo piloto;
    tempos do segundo piloto em cada km (números reais, numa mesma linha).
    Saídas:

    Nome do piloto na liderança a cada km e qual o tempo do piloto;
    Exemplo de Entrada:

    5
    Hudson
    25.1 52.8 75.2 98.4 117.7
    Bruno
    24.9 53 75.3 97.6 118.1
    Exemplo de Saída:

    Bruno  24.9
    Hudson  52.8
    Hudson  75.2 
    Bruno 97.6
    Hudson 117.7
  */

  // lendo a quantidade de km
  int km;
  cin >> km;

  // lendo o nome do primeiro piloto
  string nome1;
  cin >> nome1;

  // lendo os tempos do primeiro piloto
  double tempos1[km];
  for (int i = 0; i < km; i++)
  {
    cin >> tempos1[i];
  }

  // lendo o nome do segundo piloto
  string nome2;
  cin >> nome2;

  // lendo os tempos do segundo piloto
  double tempos2[km];
  for (int i = 0; i < km; i++)
  {
    cin >> tempos2[i];
  }

  // criando o vetor de liderança
  string lideranca[km];

  // vetor do tempo da liderança
  double tempoLideranca[km];

  // verificando quem está na liderança a cada km
  for (int i = 0; i < km; i++)
  {
    if (tempos1[i] < tempos2[i])
    {
      lideranca[i] = nome1;
      tempoLideranca[i] = tempos1[i];
    }
    else
    {
      lideranca[i] = nome2;
      tempoLideranca[i] = tempos2[i];
    }
  }

  // imprimindo a liderança a cada km
  for (int i = 0; i < km; i++)
  {
    cout << lideranca[i] << " " << tempoLideranca[i] << endl;
  }

  return 0;
}