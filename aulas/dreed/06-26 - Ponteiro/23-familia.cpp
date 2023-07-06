/*
Faça um programa que cadastre o sobrenome e as idades de famílias de 3 membros cada (idade do pai, da mãe e do filho). Os dados devem ser lidos em um arranjo alocado dinamicamente, inicialmente com tamanho 3. A leitura deve ser encerrada quando for lida a palavra FIM como nome da familia. Após o término da leitura dos dados, identifique os casais que possuem filhos de mesma idade e armazene os sobrenomes das famílias envolvidas na igualdade. Caso não haja correspondentes, deve ser impressa a mensagem NENHUM.

Restrições adicionais:
* As idades dos membros de uma família devem ser armazenadas em um registro.
** O tamanho inicial do vetor a ser utilizado é 3 e devem ser acrescentadas 3 posições a cada redimensionamento.

Entradas:

Conjunto de sobrenomes e idades das famílias
Saídas:

Tamanho do vetor a cada redimensionamento do vetor de entrada.
Sobrenome das famílias com filhos de mesma idade.
Entradas:
Silva 44 41 17
Araujo 54 49 19
Pires 25 30 4
Correia 29 27 19
Paulino 60 65 19
Moreira 29 28 4
Matos 42 41 14
FIM

Saídas:
6
9
Araujo
Correia
Paulino
Pires
Moreira

Entradas:

Castro 44 41 17
Gomes 38 36 15
Perez 44 49 19
FIM

Saídas:
NENHUM


Entradas:
Xavier 50 41 10
Salles 58 56 20
Geraldi 44 49 10
Torres 44 49 20
FIM

Saídas:
6
Xavier
Geraldi
Salles
Torres
*/
#include <iostream>
#include <cstring>
using namespace std;

struct Familias
{
  string sobrenome;
  int idadePai, idadeMae, idadeFilho;
  bool igual, jaImprimiu;
};

int main()
{
  int tamanho = 3;
  Familias *familia = new Familias[tamanho];

  string sobrenome;
  int idadePai, idadeMae, idadeFilho;

  int contFamilias = 0;
  while (cin >> sobrenome && sobrenome != "FIM")
  {
    cin >> idadePai >> idadeMae >> idadeFilho;

    if (contFamilias == tamanho)
    {
      tamanho += 3;
      Familias *aux = new Familias[tamanho];
      copy(familia, familia + contFamilias, aux);

      delete[] familia;
      familia = aux;

      cout << tamanho << endl;
    }

    familia[contFamilias].sobrenome = sobrenome;
    familia[contFamilias].idadePai = idadePai;
    familia[contFamilias].idadeMae = idadeMae;
    familia[contFamilias].idadeFilho = idadeFilho;

    contFamilias++;
  }

  for (int i = 0; i < contFamilias; i++)
  {
    familia[i].igual = false;
    familia[i].jaImprimiu = false;
  }

  int f = 0;
  for (int i = 0; i < contFamilias; i++)
  {
    for (int j = 0; j < contFamilias; j++)
    {
      if ((i != j) && (familia[i].idadeFilho == familia[j].idadeFilho))
      {
        familia[i].igual = true;
        familia[j].igual = true;
      }
    }

    for (int k = 0; k < contFamilias; k++)
    {
      if (familia[k].igual && !familia[k].jaImprimiu)
      {
        cout << familia[k].sobrenome << endl;
        familia[k].jaImprimiu = true;
        f++;
      }
    }
  }

  if (f == 0)
  {
    cout << "NENHUM" << endl;
  }

  return 0;
}