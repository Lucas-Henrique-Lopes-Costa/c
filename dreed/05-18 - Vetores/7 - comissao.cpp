#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene os valores em um vetor de números inteiros. Assuma que os valores serão maiores que zero,. Receba também o percentual de comissão que cada vendedor tem direito, em formato decimal, e armazene-os em outro vetor de ponto flutuante (float). Receba os nomes desses vendedores e armazene-os em um terceiro vetor de cadeias de caractere (string). Os vetores terão tamanho equivalente ao número de vendedores, os quais serão 10. Como saída o programa deverá fornecer um relatório com: (1) nomes dos vendedores e os valores a receber (total de vendas multiplicado pela comissão); (2) total de vendas de todos os vendedores; e (3) nome e valor do vendedor que mais irá receber.

    Entradas:

    Sequência de dez nomes dos vendedores, seguidos por seu total de vendas e valor da comissão, respectivamente.
    Saídas:

    Relação dos vendedores e os valores a receber da comissão em ponto flutuante.
    O total em número inteiro de vendas de todos os vendedores.
    Nome do que mais irá receber e o respectivo valor.
    Exemplo de entrada:

    Paulo 10 0.25
    João 55 1.20
    Maria 100 0.50
    Marcos 40 0.06
    Mario 16 0.80
    Fernanda 90 0.74
    Beatriz 04 0.69
    Matheus 34 2.00
    Heloisa 98 0.63
    Mariana 120 .03
    Exemplo de saída:

    Paulo 2.5
    João 66
    Maria 50
    Marcos 2.4
    Mario 12.8
    Fernanda 66.6
    Beatriz 2.76
    Matheus 68
    Heloisa 61.74
    Mariana 3.6

    567
    Matheus 68
  */

  string nomes[10];
  int vendas[10];
  float comissao[10], total[10];
  float totalVendas = 0;

  for (int i = 0; i < 10; i++)
  {
    cin >> nomes[i] >> vendas[i] >> comissao[i];
    total[i] = vendas[i] * comissao[i];
    totalVendas += vendas[i];
  }

  for (int i = 0; i < 10; i++)
  {
    cout << nomes[i] << " " << total[i] << endl;
  }

  cout << endl << totalVendas << endl;

  float maior = 0;

  for (int i = 0; i < 10; i++)
  {
    if (total[i] > maior)
    {
      maior = total[i];
    }
  }

  for (int i = 0; i < 10; i++)
  {
    if ((maior - total[i]) < 0.0001 )
    {
      cout << nomes[i] << " " << total[i] << endl;
    }
  }

  return 0;
}