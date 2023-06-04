#include <iostream>
using namespace std;

void mudaVolume(int mudancas[], int qtdTrocas, int &VolumeInicial)
{
	for (int i = 0; i < qtdTrocas; i++)
	{
		// cout << "Operacao: " << i << " - " << VolumeInicial /*<< " - " << mudancas[i] << " = " << (VolumeInicial += mudancas[i])*/ << endl;
		VolumeInicial += mudancas[i];

		if (VolumeInicial > 100)
		{
			VolumeInicial = 100;
		}
		if (VolumeInicial < 0)
		{
			VolumeInicial = 0;
		}
	}
}

int main()
{
	/*
	Bruno é um menino que gosta muito de ver televisão. No entanto ele se depara com um problema muito chato. Sempre que começa um novo programa no canal preferido dele, acontece de o volume do som deste programa estar diferente do anterior, às vezes com volume menor, outras vezes com volume maior. Quando está com volume menor, ele aumenta o volume pressionando uma quantidade de vezes seguidas o botão de aumentar para o volume ficar ideal; a mesma coisa acontece quando está um volume maior, e ele diminui o volume pressionando alguma quantidade de vezes seguidas o botão de diminuir o volume para ficar com o volume que ele goste no momento.

	O aparelho de TV dele tem umas peculiaridades: ele possui volume mínimo, com valor 0 (também chamado de mudo), e volume máximo, com valor 100. A TV nunca ultrapassa os volumes máximo e mínimo. Por exemplo, se o volume já estiver no máximo e ele pressionar o botão de aumentar o som, o volume não se altera. Da mesma forma, se o volume estiver no valor mínimo e ele pressionar o botão de diminuir o som, o volume não se altera. Agora Bruno quer sua ajuda: ele lembra qual era o volume inicial da TV, e quantas vezes ele pressionou cada botão. Mas, como foram várias mudanças de volume, ele não sabe qual é o volume atual da TV. Por isso, pediu que você o ajude a calcular qual é o volume atual, dados o volume inicial e a lista de trocas de volume que ele realizou.

	Escreva um subprograma principal que recebe na primeira linha da entrada dois números inteiros V e T, que indicam, respectivamente, o volume inicial e o número de trocas de volume. A segunda linha contém T números inteiros Ai que mostram as modificações de volume realizadas, na ordem em que estas modificações foram feitas. O primeiro número indica a primeira modificação de volume, o segundo número indica a segunda modificação, e assim por diante. Para cada modificação, um número maior do que zero significa quantas vezes Bruno pressionou o botão de aumentar o som; um número menor do que zero significa quantas vezes ele pressionou o botão de diminuir o som. Ou seja, se o número é igual a 5, significa que nessa modificação ele pressionou cinco vezes o botão de aumentar o som; se o número é igual a −3, significa que nessa modificação ele pressionou o botão de diminuir o som três vezes. As mudanças de volume deverão ser armazenadas em um vetor.

	Seu programa deverá ter uma função que recebe as várias mudanças de volume feitas por Bruno e retorna o volume atual.

	A saída do programa será apenas uma linha, contendo um inteiro, que indica qual o volume atual da TV após as mudanças de volume.
	Obs.: Vetores em Python são implementados como listas cujos elementos são todos homogêneos.

	Entradas:
	Dois números inteiros que indicam o volume inicial (V) e quantidade de trocas (T) de volume.
	T números inteiros que indicam as trocas de volume. Esses valores deverão ser armazenados em um vetor.

	Saídas:
	Um número inteiro que que indica qual o volume atual da TV após as mudanças de volume.

	Exemplo de Entrada:
	50 4
	11 20 -15 -13

	Exemplo de Saída:
	53

	Exemplo de Entrada:
	50 5
	30 30 30 40 -78

	Exemplo de Saída:
	22
	*/

	int V;
	cin >> V;

	int T;
	cin >> T;

	int mudancas[T];
	for (int i = 0; i < T; i++)
	{
		cin >> mudancas[i];
	}

	mudaVolume(mudancas, T, V);
	cout << V << endl;

	return 0;
}
