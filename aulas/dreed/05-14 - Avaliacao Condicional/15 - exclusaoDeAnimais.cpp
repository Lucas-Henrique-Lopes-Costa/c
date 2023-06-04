#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Pedro Álvares Cabral precisa organizar as caravelas para carregarem os cavalos, as vacas e as galinhas necessárias para a viagem para as Índias.

    A caravela possui um limite de carga e você deverá calcular a quantidade máxima de cada tipo de animal que a caravela poderá carregar. Lembre-se que Cabral possui uma quantidade limitada de cada tipo de animal, além disso, ele também informou qual o tipo de animal que é prioritário e que tipo de informação ele precisa para poder finalizar sua tarefa.

    A tabela abaixo apresenta o peso de cada tipo de animal:

    Tipo	Peso
    Cavalo	250
    Vaca	150
    Galinha	2
    Informações extras:

    O objetivo é colocar o máximo de animais, dessa forma os animais de pequeno porte tem prioridade.
    Ao final do processo é necessário ter como informação a quantidade de cada animal que não pode ser incluído na caravela.
    Entradas:

    Limite de Carga (Inteiro).
    Quantidade de cavalos disponíveis (Inteiro).
    Quantidade de vacas disponíveis (Inteiro).
    Quantidade de galinhas disponíveis (Inteiro).
    Saída:

    Quantidade de animais que NÃO podem ser incluídos numa caravela na seguinte ordem: Cavalos, Vacas e Galinhas.
    Exemplo de entrada:

    3000
    10
    10
    10
    Exemplo de saída:

    5
    0
    0
  */

  int limiteCarga, qtdCavalos, qtdVacas, qtdGalinhas, contadorGalhinhas = 0, contadorVacas = 0, contadorCavalos = 0;

  cin >> limiteCarga >> qtdCavalos >> qtdVacas >> qtdGalinhas;

  while (limiteCarga >= 2 and contadorGalhinhas < qtdGalinhas)
  {
    limiteCarga -= 2;
    contadorGalhinhas++;
  }

  while (limiteCarga >= 150 and contadorVacas < qtdVacas)
  {
    limiteCarga -= 150;
    contadorVacas++;
  }

  while (limiteCarga >= 250 and contadorCavalos < qtdCavalos)
  {
    limiteCarga -= 250;
    contadorCavalos++;
  }

  cout << qtdCavalos - contadorCavalos << endl;
  cout << qtdVacas - contadorVacas << endl;
  cout << qtdGalinhas - contadorGalhinhas << endl;

  return 0;
}