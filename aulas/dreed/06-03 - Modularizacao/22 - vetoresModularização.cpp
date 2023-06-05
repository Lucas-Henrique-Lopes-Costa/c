#include <iostream>
using namespace std;

float calcularPrecoSeparado(string lista[], int tamanho, float preco, string ingrediente)
{
	float total = 0;
	int cont = 0;
	for (int i = 0; i < tamanho; i++)
	{
		if (lista[i] == ingrediente)
		{
			total += preco;
			cont++;
		}
	}

	if (cont == 2)
		total *= 0.95;
	else if (cont == 3 || cont == 4)
		total *= 0.90;
	else if (cont >= 5)
		total *= 0.85;

	return total;
}

float calcularTotal(string lista[], int tamanho)
{
	float total = 0;

	total += calcularPrecoSeparado(lista, tamanho, 4.50, "cha");
	total += calcularPrecoSeparado(lista, tamanho, 3.25, "cafe");
	total += calcularPrecoSeparado(lista, tamanho, 6.90, "coca");
	total += calcularPrecoSeparado(lista, tamanho, 2.75, "biscoito");
	total += calcularPrecoSeparado(lista, tamanho, 0.80, "pao");
	total += calcularPrecoSeparado(lista, tamanho, 3.50, "salgado");

	cout << total << endl;
	return total;
}

int main()
{
	/*
		Uma mercearia do bairro lançou uma promoção para clientes que comprarem mais de um mesmo item. Você deve criar um programa que leia uma lista de compras e imprima o valor final das compras com o desconto. O desconto segue a seguinte regra: quando uma pessoa comprar 2 unidades do mesmo item, receberá 5% de desconto sobre o valor daquelas unidades, quando comprar 3 ou 4 unidades, receberá 10% de desconto, e quando comprar 5 unidades ou mais, receberá 15% de desconto. Sabe-se que os produtos vendidos nessa mercearia e seus respectivos valores individuais são:

		1. cha - 4.50
		2. cafe - 3.25
		3. coca - 6.90
		4. biscoito - 2.75
		5. pao - 0.80
		6. salgado - 3.50


		Para esse problema, o primeiro valor da entrada será o número N de itens comprados, e em cada linha seguinte será dado o nome de um dos itens listados acima. Um item poderá aparecer mais de uma vez na lista, em posições não necessariamente contíguas. A entrada de dados deverá ser feita na função principal. Seu programa deverá calcular o valor total pago pelas compras em uma função e o resultado deverá ser impresso na função principal.

		Entradas:
		Número de itens comprados
		Sequência com os itens

		Saídas:
		Valor total pago pelas compras

		Exemplo de Entrada:
		5
		biscoito
		biscoito
		coca
		cha
		cafe

		Exemplo de Saída:
		19.875
	*/

	// Lendo vetores
	int tamanho;
	cin >> tamanho;

	string lista[tamanho];
	for (int i = 0; i < tamanho; i++)
		cin >> lista[i];

	// Chamando Funções
	calcularTotal(lista, tamanho);

	return 0;
}
