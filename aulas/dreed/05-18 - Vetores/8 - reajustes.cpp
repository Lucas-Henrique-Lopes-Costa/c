#include <iostream>
using namespace std;

int main()
{
  /*
    Uma microempresa precisa reajustar os salários de seus cinco funcionários. Faça um programa que preencha três vetores com cinco posições cada. O primeiro vetor receberá o primeiro nome dos funcionários de uma empresa; o segundo e terceiro vetor receberão, respectivamente, o salário e o tempo de serviço em anos de cada um dos funcionários. Em um primeiro momento, seu programa deverá exibir no dispositivo de saída padrão a lista de nomes dos funcionários que não receberão aumento nos seus respectivos salários, sabendo que um dado funcionário só receberá aumento se satisfazer no mínimo uma das seguintes condições:

    Tempo de serviço igual ou superior a cinco anos.
    Salário igual ou inferior a R$400,00.
    Em um segundo momento, seu programa deverá exibir a lista dos nomes de funcionários que receberão aumento, com os seus respectivos novos salários. Sabe-se que os ajustes de salários nestes casos são baseados nas seguintes regras:

    Se o funcionário satisfazer as condições de tempo de serviço e salário o aumento será de 35%.
    Se o funcionário satisfazer apenas a condição de tempo de serviço o aumento será de 25%.
    Se o funcionário satisfazer apenas a condição de salário o aumento será de 15%.
    Entradas:

    Sequência de cinco nomes.
    Sequência de cinco valores em ponto flutuante denotando os salários dos funcionários da empresa .
    Sequência de cinco valores inteiros denotando os tempos de serviço dos funcionários da empresa .
    Saídas:

    Lista dos nomes dos funcionários que não receberão aumento. A listagem deve ser precedida pelos dizeres SEM REAJUSTE:. Caso todos os funcionários recebam aumento, esta parte da saída não deverá exibir nenhuma informação.
    Lista dos nomes dos funcionários que receberão reajuste de salário. A listagem deve ser precedida pelos dizeres COM REAJUSTE: e deverá exibir, aos pares, o nome do funcionário e o seu novo salário. Caso todos os funcionários não recebam aumento, esta parte da saída não deverá exibir nenhuma informação.
    Exemplo de entrada:

    Ana Beatriz Camila Daniela Elaine
    2000.0 1500.0 1000 350.0 3500.0
    4 4 5 5 6
    Exemplo de saída:

    SEM REAJUSTE:
    Ana
    Beatriz

    COM REAJUSTE:
    Camila 1250
    Daniela 472.5
    Elaine 4375
  */

  string nomes[5];
  double salarios[5];
  int tempos[5];

  for (int i = 0; i < 5; i++)
  {
    cin >> nomes[i];
  }

  for (int i = 0; i < 5; i++)
  {
    cin >> salarios[i];
  }

  for (int i = 0; i < 5; i++)
  {
    cin >> tempos[i];
  }

  string reajuste[5];
  int contReajuste = 0;

  double salarioReajuste[5];
  int contSalarioReajuste = 0;

  int tempoReajuste[5];
  int contTempoReajuste = 0;

  string semReajuste[5];
  int contSemReajuste = 0;

  for (int i = 0; i < 5; i++)
  {
    if (tempos[i] >= 5 or salarios[i] <= 400)
    {
      reajuste[contReajuste] = nomes[i];
      contReajuste++;

      salarioReajuste[contSalarioReajuste] = salarios[i];
      contSalarioReajuste++;

      tempoReajuste[contTempoReajuste] = tempos[i];
      contTempoReajuste++;
    }
    else
    {
      semReajuste[contSemReajuste] = nomes[i];
      contSemReajuste++;
    }
  }

  // não imprimindo o SEM REAJUSTE se todos receberem reajuste
  if (contSemReajuste > 0)
  {
    cout << "SEM REAJUSTE:" << endl;
    for (int i = 0; i < contSemReajuste; i++)
    {
      cout << semReajuste[i] << endl;
    }

    // se tiver reajuste e sem reajuste, pula uma linha
    if (contReajuste > 0)
    {
      cout << endl;
    }
  }

  // Caso todos os funcionários não recebam aumento, esta parte da saída não deverá exibir nenhuma informação.
  if (contReajuste == 0)
  {
    return 0;
  }

  cout << "COM REAJUSTE:" << endl;
  for (int i = 0; i < contReajuste; i++)
  {
    cout << reajuste[i] << " ";
    if (tempoReajuste[i] >= 5 and salarioReajuste[i] <= 400)
    {
      cout << salarioReajuste[i] * 1.35 << endl;
    }
    else if (tempoReajuste[i] >= 5)
    {
      cout << salarioReajuste[i] * 1.25 << endl;
    }
    else
    {
      cout << salarioReajuste[i] * 1.15 << endl;
    }
  }

  return 0;
}