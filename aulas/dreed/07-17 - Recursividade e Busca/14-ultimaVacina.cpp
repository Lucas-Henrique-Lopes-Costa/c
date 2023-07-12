/*
Faça um programa que determina a data da última vacina de um animal de estimação, usando busca binária.

Inicialmente o programa deve ler os dados já ordenados de vários animais de estimação. Depois deve ler a identificação de um deles e informar a data da sua última vacina.

Cada animal deve ser representado por um registro com:

Identificador (número inteiro),
Nome do animal (sequência de caracteres),
Nome do dono (sequência de caracteres),
Data da última vacina (data).
Cada data deve ser representada por um registro com dia, mês e ano (3 números inteiros, não usar vetor).

Entradas:
Os dados de vários animais de estimação, com cada item na ordem descrita acima, já em ordem crescente de identificador. Todos os dados de cada animal estarão numa única linha. O valor zero como identificador serve para indicar que não há mais dados de animais de estimação para ler.
Um identificador de um animal para busca.
Suponha que os nomes do animal e do seu dono não possuem espaços. Suponha que nunca será necessário cadastrar mais do que 100 animais. Suponha que nomes nunca possuem mais do que 50 caracteres. Suponha que as datas lidas nunca são inválidas. Em C++, é permitido usar o tipo string para representar os nomes.

Saídas:
O nome do animal,
a data da sua última vacina (use barras para separar o dia, mês e ano).
Caso o animal não esteja cadastrado, o programa deverá escrever apenas "inexistente" (minúsculas, sem as aspas).

Exemplo de Entrada:
1 Rex Joao 2 12 2015
2 Toto Maria 25 3 2014
3 Duquesa Carla 1 3 2016
7 Jupiter Wilson 19 11 2015
0
2

Exemplo de Saída:
Toto 25/3/2014
*/
#include <iostream>
using namespace std;

struct Data
{
  int dia;
  int mes;
  int ano;
};

struct Animal
{
  int identificador;
  string nomeAnimal;
  string nomeDono;
  Data dataVacina;
};

int buscaBinaria(Animal vetor[], int numeroProcurado, int inicio, int fim, int &index)
{
  if (inicio <= fim)
  {
    index = (inicio + fim) / 2;

    if (vetor[index].identificador == numeroProcurado)
    {
      return index;
    }
    else if (vetor[index].identificador < numeroProcurado)
    {
      inicio = index + 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index);
    }
    else
    {
      fim = index - 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index);
    }
  }
  else
  {
    index = -1;
    return index;
  }

  return 0;
}

int main()
{
  Animal animais[100];
  int identificador = 1, index = 0;

  while (cin >> identificador && identificador > 0)
  {
    animais[index].identificador = identificador;
    cin >> animais[index].nomeAnimal;
    cin >> animais[index].nomeDono;
    cin >> animais[index].dataVacina.dia;
    cin >> animais[index].dataVacina.mes;
    cin >> animais[index].dataVacina.ano;

    index++;
  }

  int indexProcura;
  cin >> indexProcura;

  int inicio = 0;
  int fim = index - 1;
  int indexAchado;

  buscaBinaria(animais, indexProcura, inicio, fim, indexAchado);

  if (indexAchado > 0)
  {
    cout << animais[indexAchado].nomeAnimal << " ";
    cout << animais[indexAchado].dataVacina.dia << "/" << animais[indexAchado].dataVacina.mes << "/" << animais[indexAchado].dataVacina.ano << endl;
  }
  else
  {
    cout << "inexistente" << endl;
  }

  return 0;
}