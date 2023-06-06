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

					// verifica se algum dos emoticons existe no texto, depois soma no valor de cont o tamanho do emoticon
					for (long unsigned l = 0; l < emoticons[j].length() && existeEmoticon; l++)
					{
						if (texto[i][k + l] != emoticons[j][l])
						{
							existeEmoticon = false;
						}
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
	
	// Lendo informações do texto 1
	int n1, m1;
	cin >> n1 >> m1;

	// Lendo emoticons 1
	string emoticons1[n1];

	for (int i = 0; i < n1; i++)
	{
		cin >> emoticons1[i];
		cin.ignore();
	}

	// Lendo texto 1
	string texto1[m1];

	for (int i = 0; i < m1; i++)
	{
		getline(cin, texto1[i]);
	}

	// Excecutando função 1
	int cont1 = 0;
	removerEmojis(texto1, emoticons1, m1, n1, cont1);

	// Lendo informações do texto 2
	int n2, m2;
	cin >> n2 >> m2;

	// Lendo emoticons 2
	string emoticons2[n2];

	for (int i = 0; i < n2; i++)
	{
		cin >> emoticons2[i];
		cin.ignore();
	}

	// Lendo texto 2
	string texto2[m2];

	for (int i = 0; i < m2; i++)
	{
		getline(cin, texto2[i]);
	}

	// Excecutando função 2
	int cont2 = 0;
	removerEmojis(texto2, emoticons2, m2, n2, cont2);

	// Lendo informações do texto 3
	int n3, m3;
	cin >> n3 >> m3;

	// Lendo emoticons 3
	string emoticons3[n3];

	for (int i = 0; i < n3; i++)
	{
		cin >> emoticons3[i];
		cin.ignore();
	}

	// Lendo texto 3
	string texto3[m3];

	for (int i = 0; i < m3; i++)
	{
		getline(cin, texto3[i]);
	}

	// Excecutando função 3
	int cont3 = 0;
	removerEmojis(texto3, emoticons3, m3, n3, cont3);

	cout << cont1 << endl;
	cout << cont2 << endl;
	cout << cont3 << endl;

	return 0;
}
