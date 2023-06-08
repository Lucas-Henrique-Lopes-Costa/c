#include <iostream>
using namespace std;

void removerEmojis(string texto[], string emoticons[], int m, int n, int &cont)
{
	cont = 0;
	// Percorrendo texto
	for (int i = 0; i < m; i++)
	{
		// Percorrendo emoticons
		for (int j = 0; j < n; j++)
		{
			// Percorrendo texto[i]
			for (long unsigned k = 0; k < texto[i].length(); k++)
			{
				// Verificando se existe o primeiro item do emoticon
				if (texto[i][k] == emoticons[j][0])
				{
					// Percorrendo emotico
					bool existeEmoticon = true;

					// usando while
					long unsigned l = 0;
					while (l < emoticons[j].length() && existeEmoticon)
					{
						if (texto[i][k + l] != emoticons[j][l])
						{
							existeEmoticon = false;
						}
						l++;
					}

					if (existeEmoticon)
					{
						cont += emoticons[j].length();
					}
				}
			}
		}
	}
}

int main()
{
	/*
		Emoticons são bastantes usados em conversas de chats e emails tentando expressar emoções que palavras não conseguem. Isto talvez seja uma grande ferramenta para muitos, mas muitas pessoas também acham realmente irritante e querem um descanço de emoticons.

		George é uma dessas pessoas. Ele odeia emoticons tanto, que está preparando um plano para remover todos os emoticons de todos os emails do mundo. Desde de que você compartilhe seu plano visionário, você o ajudará a completar seu plano.

		Seu programa irá receber uma lista de emoticons em que seram procurados. Cada emoticon será uma string de caractéres não contendo nenhum espaço. Você também receberá várias linhas de texto. O que você precisava fazer é mudar alguns caractéres do texto para espaço para assegurar que não restou emoticons no texto. Para que seja considerado um emoticon ele deve aparecer na mesma linha do texto e ser formado pelos consecutivos caractéres já registrados na lista.

		Para ajudar que o plano de George continue secreto o máximo possível; você precisa fazer seu trabalho fazendo o mínimo de alterações possíveis no texto.

		Entradas:
		Dois inteiros separados por um espaço simples: N, número de emoticons registrados, e M, número de linhas que o texto.
		As próxmas N linhas iram conter os emoticons, cada linha um emoticon. OBS.: Considere que cada emoticon será formado por até 15 caractéres não vázios.
		M linhas de texto, contendo no máximo 80 caractéres.
		Você pode assumir 1<=N, M<=100, a entrada termina com N=M=0.

		Saídas:
		Para cada caso teste, sua saída deve ser exatamente em uma linha contendo um único número inteiro que indica o mínimo de mudanças que você precisa fazer no texto inteiro para assegurar que nenhum dos emoticon registrado apareça.

		Exemplo de Entrada:
		4 3
		:-)
		:-(
		(-:
		)-:
		Oi caros alunos de Ialg :-)
		Espero que consigam fazer esse exercicio (-:
		E nao fiquem triste com o dredd :-(
		1 2
		-_-
		:-D
		-_-
		1 1
		:-)
		:-D
		0 0

		Exemplo de Saída:
		9
		3
		0
	*/

	// Lendo informações
	int n, m;
	cin >> n >> m;

	// Armazena os resultados no vetor
	int resultados[200];
	int j = 0;

	// repita enquanto n e m forem diferentes de 0
	while (n != 0 && m != 0)
	{
		// Lendo emoticons
		string emoticons[n];

		for (int i = 0; i < n; i++)
		{
			cin >> emoticons[i];
			cin.ignore();
		}

		// Lendo
		string texto[m];

		for (int i = 0; i < m; i++)
		{
			getline(cin, texto[i]);
		}

		// Excecutando
		int cont = 0;
		removerEmojis(texto, emoticons, m, n, cont);

		// Armazenando resultado
		resultados[j] = cont;
		j++;

		// Lendo informações
		cin >> n >> m;
	}

	// Imprimindo resultados
	for (int i = 0; i < j; i++)
		cout << resultados[i] << endl;

	return 0;
}
