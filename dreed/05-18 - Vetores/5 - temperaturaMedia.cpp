#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um vetor. O programa deverá então descobrir e exibir o mês mais quente e o mais frio do ano. Assuma que todos os dados de entrada serão fornecidos em uma mesma linha. Assuma também que não haverá empates em relação a quais são os meses mais frios e mais quentes do ano.

    Obs.: Vetores em Python são implementados como listas cujos elementos são todos homogêneos.

    Entrada:

    Doze números decimais representando as temperaturas médias de cada mês do ano. O primeiro se refere a janeiro, o segundo a fevereiro, e assim por diante.
    Saída:

    O nome do mês mais quente do ano. A grafia do nome do mês deve utilizar apenas letras minúsculas e sem acentuação.
    O nome do mês mais frio do ano. A grafia do nome do mês deve utilizar apenas letras minúsculas e sem acentuação.
    Exemplo de entrada:

    31.5 30.3 30.4 27.3 22.1 19.4 15.3 14.0 19.9 22.5 29.3 30.7
    Exemplo de saída:

    janeiro
    agosto
  */

  // Leitura de dados
  double vetorTemperatura[12];
  for (int i = 0; i < 12; i++)
  {
    cin >> vetorTemperatura[i];
  }

  // Processamento -> Menor Valor
  double menorTemperatura = vetorTemperatura[0];

  for (int i = 0; i < 10; i++)
  {
    if (menorTemperatura > vetorTemperatura[i])
    {
      menorTemperatura = vetorTemperatura[i];
    }
  }

  // Processamento -> Maior Valor
  double maiorTemperatura = menorTemperatura;

  for (int i = 0; i < 10; i++)
  {
    if (maiorTemperatura < vetorTemperatura[i])
    {
      maiorTemperatura = vetorTemperatura[i];
    }
  }

  // Achando o mês
  string meses[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

  int indexMenorTemperatura, indexMaiorTemperatura;

  for (int i = 0; i < 12; i++)
  {
    if ((vetorTemperatura[i] - menorTemperatura) < 0.000001)
    {
      indexMenorTemperatura = i;
    }
  }

  for (int i = 0; i < 12; i++)
  {
    if ((maiorTemperatura - vetorTemperatura[i]) < 0.000001)
    {
      indexMaiorTemperatura = i;
    }
  }

  cout << meses[indexMaiorTemperatura] << endl
       << meses[indexMenorTemperatura] << endl;

  return 0;
}