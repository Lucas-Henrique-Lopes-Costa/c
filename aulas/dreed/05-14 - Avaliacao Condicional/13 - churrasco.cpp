#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Para comprar os itens do churrasco que seria realizado na República Trintagarantido, Juvenal e Roberto foram até um hipermercado da cidade. Chegando na seção de churrasco, receberam uma lista com todos os produtos disponíveis e foram orientados a preencher a quantidade desejada de cada um deles. Na lista estão os itens: picanha, alcatra, linguiça, espetinho vegetariano, sal, farinha e carvão. As quantidades a serem informadas por Juvenal e Roberto serão sempre valores inteiros.

    Além disso, no momento do pagamento da compra, o atendente informou que o supermercado estava realizando uma promoção. Nas compras até R$ 200,00 (incluso) eles recebem 5% de desconto e que compras acima de R$ 200,00 recebiam 10% de desconto no total da compra realizada.

    Escreva um programa que calcule e escreva o total da compra realizada, o valor do desconto e o valor final a ser pago por Juvenal e Roberto (não se preocupe com a quantidade de casas decimais nos valores).

    Produto	Preço por quilo (R$)
    picanha	28,90
    alcatra	19,90
    linguiça	7,95
    espetinho vegetariano	2,99
    sal	1,50
    farinha	1,85
    carvão	8,70

    A entrada de dados é composta de sete números inteiros representando a quantidade a ser comprada de cada produto.

    Entradas:

    Sete números inteiros (sendo um por linha) indicando as quantidades a serem compradas de cada produto.

    Saída:

    O valor total da compra
    O valor do desconto a ser obtido na compra
    O valor final da compra (valor total - descontos)
    Exemplo de entrada:

    2
    3
    4
    4
    1
    1
    4

    Exemplo de saída:

    199.41
    9.97
    189.44
  */

  int picanha, alcatra, linguica, espetinho, sal, farinha, carvao;
  cin >> picanha >> alcatra >> linguica >> espetinho >> sal >> farinha >> carvao;

  float total = (picanha * 28.90) + (alcatra * 19.90) + (linguica * 7.95) + (espetinho * 2.99) + (sal * 1.50) + (farinha * 1.85) + (carvao * 8.70);

  if (total <= 200)
  {
    cout << fixed << setprecision(2) << total << endl;
    cout << fixed << setprecision(2) << total * 0.05 << endl;
    cout << fixed << setprecision(2) << total - (total * 0.05) << endl;
  }
  else
  {
    cout << fixed << setprecision(2) << total << endl;
    cout << fixed << setprecision(2) << total * 0.1 << endl;
    cout << fixed << setprecision(2) << total - (total * 0.1) << endl;
  }

  return 0;
}