/*
Uma pizzaria precisa entregar mais pizzas que estava planejando. Entretanto, para agilizar as entregas, seu motoboy atenderá somente os N clientes mais próximos da pizzaria. Como saída, o programa deverá retornar a soma do valor das pizzas nos N clientes mais próximos da pizzaria.

Lembre: N é somente uma porção de clientes de um total de clientes que serão fornecidos na entrada.

Para cada cliente, a pizzaria possui os seguintes dados (usar um registro):

Nome do cliente (string)
Coordenada x do cliente (inteiro)
Coordenada y do cliente (inteiro)
Distância da pizzaria (inteiro)
Valor da pizza (real) .
Para cada cliente, deverá ser criado um registro com os dados acima, e a ordenação deverá ser feita usando o algoritmo InsertionSort. Não haverá clientes com distância repetida.

Dica: A distância entre dois pontos pode ser calculada por: sqrt [(x1-x2)^2 + (y1-y2)^2]

Entradas:
Número de clientes que serão atendidos
Coordenada x da pizzaria
Coordenada y da pizzaria
Número total de clientes
Nome cliente 1
Coordenada x do cliente 1
Coordenada y do cliente 1
Valor da pizza do cliente 1
Nome cliente 2
Coordenada x do cliente 2
Coordenada y do cliente 2
Valor da pizza do cliente 2
...

Saídas :
Soma do valor das pizzas dos N clientes mais próximos da pizzaria

Exemplo de Entrada:
2
5
5
3
Joao
10
5
22.50
Lucas
15
30
32.00
Maria
20
10
21.00

Exemplo de Saída:
43.50
*/
#include <iostream>
#include <cmath>
using namespace std;

struct ListaClientes
{
  string nome;
  int x;
  int y;
  int distancia;
  float valorPizza;
};

void insertionSort(int n, ListaClientes vetor[])
{
  int i, j;
  ListaClientes aux;
  for (i = 1; i < n; i++)
  {
    aux = vetor[i];
    j = i - 1;
    while ((j >= 0) && (aux.distancia < vetor[j].distancia))
    {
      vetor[j + 1] = vetor[j];
      j--;
    }
    vetor[j + 1] = aux;
  }
}

int main()
{
  int n;
  cin >> n;

  int xPizzaria, yPizzaria;
  cin >> xPizzaria >> yPizzaria;

  int totalClientes;
  cin >> totalClientes;

  ListaClientes clientes[totalClientes];

  for (int i = 0; i < totalClientes; i++)
  {
    cin >> clientes[i].nome;
    cin >> clientes[i].x;
    cin >> clientes[i].y;
    cin >> clientes[i].valorPizza;
    clientes[i].distancia = sqrt(pow((xPizzaria - clientes[i].x), 2) + pow((yPizzaria - clientes[i].y), 2));
  }

  insertionSort(totalClientes, clientes);

  float soma = 0;

  for (int i = 0; i < n; i++)
  {
    soma += clientes[i].valorPizza;
  }

  cout << soma << endl;

  return 0;
}