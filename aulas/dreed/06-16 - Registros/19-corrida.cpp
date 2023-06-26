/*
Um grupo de atletas resolveu se preparar para correr a Corrida de São Silvestre. Para auxiliar na preparação, pretende-se guardar os dados de cada corredor e suas informações dos treinamentos. Com isso, espera-se levantar informações que possam ajudar os corredores a direcionarem seus treinamentos.

Faça um programa que receba o número de atletas do grupo e permita guardar os dados de cada corredor em um registro com as seguintes informações: código do atleta, primeiro nome, idade, peso e sexo (M para masculino e F para feminino). O programa deve também guardar os dados de treinamento sabendo-se que, em cada treino, cada atleta corre uma determinada distância e é medido o tempo gasto. Portanto, o programa deve ter um registro com: dia do treino (ignore mês e ano), código do atleta, distancia percorrida (km, real) e tempo gasto (minutos). Os dados dos treinamentos devem ser lidos até que um dia -1 seja digitado.

O programa deve exibir o nome e a distância total percorrida pelo atleta mais velho do sexo masculino, o nome e a idade do atleta que participou de mais dias de treino (em caso de empate, considerar o que encontrar primeiro) e o nome e o tempo médio diário de treino de cada atleta.

Obs.1: quando for digitado dia de valor -1 não serão digitados os valores dos demais campos.

Obs.2: considere que em cada dia existe apenas um registro de treino para cada atleta.

Entrada:
A quantidade de corredores a serem registrados.
Os dados de todos os corredores (código, nome, idade, peso e sexo).
Os dados de treinamento (dia, código, distância e tempo).

Saída:
O nome e a distância total percorrida pelo atleta mais velho do sexo masculino (se nenhum homem for registrado, exibir somente -1).
O nome e a idade do atleta que participou de mais dias de treino (em caso de empate, considerar o que encontrar primeiro).
O nome e o tempo médio diário de treino de cada atleta.

Exemplo de entrada:
3
1 Joao	30	80	M
2 Maria	25	68	F
3 Pedro	40	95	M
1 1 10.4 30
1 2 6.2 25
1 3 8.0 36
2 1 12.4 32
2 2 7.1 27
2 3 8.1 35
3 1 12.0 30
3 3 9.1 38
-1
	
Exemplo de saída:
Pedro 25.2
Joao 30
Joao 30.6667
Maria 26
Pedro 36.3333
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Atletas
{
  int codigo;
  string nome;
  int idade;
  float peso;
  char sexo;
};

struct Treinamento
{
  int dia;
  int codigo;
  float distancia;
  int tempo;
};

int main()
{
  int n;
  cin >> n;

  Atletas atleta[n];

  for (int i = 0; i < n; i++)
  {
    cin >> atleta[i].codigo;
    cin >> atleta[i].nome;
    cin >> atleta[i].idade;
    cin >> atleta[i].peso;
    cin >> atleta[i].sexo;
  }

  Treinamento treino[1000];

  int dia = 0;
  int contadorTreino = 0;

  while (dia != -1)
  {
    cin >> dia;
    if (dia != -1)
    {
      treino[contadorTreino].dia = dia;
      cin >> treino[contadorTreino].codigo;
      cin >> treino[contadorTreino].distancia;
      cin >> treino[contadorTreino].tempo;
      contadorTreino++;
    }
  }

  int maiorIdade = 0;
  int posicaoMaiorIdade = 0;

  bool encontrouHomem = false;
  for (int i = 0; i < n; i++)
  {
    if (atleta[i].idade > maiorIdade and atleta[i].sexo == 'M')
    {
      maiorIdade = atleta[i].idade;
      posicaoMaiorIdade = i;
      encontrouHomem = true;
    }
  }

  if (encontrouHomem)
  {
    cout << atleta[posicaoMaiorIdade].nome << " ";
    float distanciaTotal = 0;
    for (int i = 0; i < contadorTreino; i++)
    {
      if (treino[i].codigo == atleta[posicaoMaiorIdade].codigo)
      {
        distanciaTotal += treino[i].distancia;
      }
    }
    cout << distanciaTotal << endl;
  }
  else
  {
    cout << "-1" << endl;
  }

  int maiorDias = 0;
  int posicaoMaiorDias = 0;

  for (int i = 0; i < n; i++)
  {
    int dias = 0;
    for (int j = 0; j < contadorTreino; j++)
    {
      if (treino[j].codigo == atleta[i].codigo)
      {
        dias++;
      }
    }
    if (dias > maiorDias)
    {
      maiorDias = dias;
      posicaoMaiorDias = i;
    }
  }

  cout << atleta[posicaoMaiorDias].nome << " " << atleta[posicaoMaiorDias].idade << endl;

  for (int i = 0; i < n; i++)
  {
    int dias = 0;
    float tempoTotal = 0;
    for (int j = 0; j < contadorTreino; j++)
    {
      if (treino[j].codigo == atleta[i].codigo)
      {
        dias++;
        tempoTotal += treino[j].tempo;
      }
    }
    cout << atleta[i].nome << " " << tempoTotal / dias << endl;
  }

  return 0;
}
