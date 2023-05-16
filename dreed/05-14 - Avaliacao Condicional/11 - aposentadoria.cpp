#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Devido ao défict previdenciário brasileiro, o governo propôs novas regras de aposentadoria. Para os trabalhadores que já estão na ativa, existe uma regra de transição que prevê um pedágio (tempo extra) de 30% sobre o tempo que faltaria para atingir 30 anos de trabalho, se for mulher, ou 35 anos de trabalho, se for homem. Por exemplo, uma mulher de 50 anos de idade que já trabalhou 25 anos deverá pagar um pedágio de 30% sobre os 5 anos restantes (que faltariam para completar 30 anos de trabalho), ou seja, terá que trabalhar por mais 6,5 anos. Com isso, ela irá se aposentar aos 56,5 anos, quando alcançará 31,5 anos trabalhados. No entanto, essa regra de transição só é válida para pessoas que já estão trabalhando por mais de 15 anos (15 não incluso), no caso de mulheres, ou mais de 20 anos (20 não incluso), no caso de homens. Para todos os demais casos, a aposentadoria se dará por idade mínima, ou seja, 62 anos para mulheres e 65 anos para homens. Faça um programa que leia o gênero, a idade e a quantidade de anos já trabalhados por uma pessoa e calcule a idade com a qual a mesma irá se aposentar.

    Entradas:

    O gênero da pessoa, que será o valor inteiro 1 se for homem ou 0 se for mulher.
    Idade da pessoa (valor inteiro).
    Quantidade de tempo (anos) já trabalhados pela pessoa (número real).
    Saídas:

    Idade que a pessoa terá a se aposentar (número real).
    Exemplo de Entrada:

    0
    50
    25
    Exemplo de Saída:

    56.5
    Exemplo de Entrada:

    1
    35
    10
    Exemplo de Saída:

    65
  */

  int genero, idade, tempoTrabalhado;
  float tempoTrabalhado;
  
  cin >> genero >> idade >> tempoTrabalhado;
  
  

  return 0;
}