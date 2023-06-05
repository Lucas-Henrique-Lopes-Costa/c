#include <iostream>
using namespace std;

int menorSaldoCalc(int S, int movimentacao[], int &menorSaldo, int N)
{
	for (int i = 0; i < N; i++)
	{
		S += movimentacao[i];
		if (S < menorSaldo)
			menorSaldo = S;
	}

	return menorSaldo;
}

int main()
{
	/*
		Vovô João tem uma banca de jornais; ele tem muitos clientes, e diariamente recebe muito dinheiro, mas também faz muitos pagamentos para manter o seu estoque de jornais e revistas. Todo dia ele vai ao banco realizar um depósito ou uma retirada de dinheiro. Em alguns dias, o saldo de sua conta no banco pode ficar negativo, mas Vovô João não é penalizado por isso. Dada a movimentação diária da conta do banco do Vovô João, você deve escrever um programa que calcule o menor saldo da conta, no período dado.

		Escreva um programa que recebe na primeira linha da entrada dois números inteiros N e S que indicam respectivamente o número de dias do período de interesse e o saldo da conta no início do período. Cada uma das N linhas seguintes contém um número inteiro indicando a movimentação de um dia (valor positivo no caso de depósito, valor negativo no caso de retirada). A movimentação é dada para um período de N dias consecutivos: a primeira das N linhas corresponde ao primeiro dia do período de interesse, a segunda linha corresponde ao segundo dia, e assim por diante. As N movimentações devem ser armazenadas em um vetor.

		Seu programa deverá ter uma função que retorna o menor saldo da conta do vovô no período indicado. Observe que não é o saldo final, é o menor dos saldos em todo o período. A saída será impressa pela função principal.

		Entradas:
		Dois números inteiros que indicam o número de dias no período de interesse e o saldo da conta no início do período.
		N linhas seguintes contendo um número inteiro indicando a movimentação de um dia (valor positivo no caso de depósito, valor negativo no caso de retirada). Esses valores deverão ser armazenados em um vetor.

		Saídas:
		Um número inteiro que corresponde ao menor valor de saldo da conta no período dado.

		Exemplo de Entrada:
		3 1000
		100
		-800
		50

		Exemplo de Saída:
		300

		Exemplo de Entrada:
		6 -200
		-100
		1000
		-2000
		100
		-50
		2000

		Exemplo de Saída:
		-1300
	*/

	// Lendo vetores
	int N, S;
	cin >> N >> S;

	int movimentacao[N];
	for (int i = 0; i < N; i++)
		cin >> movimentacao[i];

	// Calculando o menor saldo
	int menorSaldo = S;
	menorSaldoCalc(S, movimentacao, menorSaldo, N);

	cout << menorSaldo << endl;

	return 0;
}
