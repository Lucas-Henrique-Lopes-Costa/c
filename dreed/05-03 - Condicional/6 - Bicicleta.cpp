#include <iostream>
#include <cmath>
#include <iomanip>
#include <codecvt>

using namespace std;

int main()
{
  /*
    João precisa visitar três locais diferentes em sua cidade, nomeados aqui como Local 1, Local 2 e Local 3. O itinerário que João irá percorrer começa em sua casa, depois ele deve ir para o Local 1, depois para o Local 2, e por fim, chegar ao Local 3. Sua tarefa é ajudar João a decidir se ele deverá fazer o percurso de bicicleta ou de carro, de forma a gastar a menor quantidade possível de tempo no trajeto.

    O tempo que João irá gastar para percorrer o trajeto, depende da velocidade de seu meio de transporte, que varia de acordo com a condição de trânsito da sua cidade em um determinado dia. A condição de trânsito na cidade pode ser cheio ou livre e os tempos gastos por quilômetro percorrido em cada meio de transporte, nestas condições, são informados na tabela a seguir:

    Condição do Trânsito (min/km):

    Veículo	Trânsito Cheio	Trânsito Livre
    Biclicleta	18	15
    Carro	24	5
    Você deve construir um programa que seja capaz de calcular a distância total do trajeto, dada as localizações de cada uma das localidades do percurso. Por simplificação, considere que cada local será representado por um ponto em um plano cartesiano, expresso por um par ordenado (X,Y) e que será possível ir de um local ao outro por meio de uma linha reta. Considere ainda que a casa de João se encontra no centro do plano cartesiano, ou seja, no par de coordenadas (0,0).

    Note que para calcular o tempo total do trajeto, você primeiramente deverá calcular as distâncias:

    distância(Casa do João, Local 1)
    distância(Local 1, Local 2)
    distância(Local 2, Local 3)
    e a seguir, multiplicar cada uma destas distâncias pelo tempo gasto por quilômetro percorrido naquele pedaço do trajeto (de acordo com as condições de trânsito, para cada um dos meios de transporte).

    Ao final da execução, seu programa deverá indicar qual meio de transporte levaria menos tempo para percorrer o trajeto completo.

    Entradas:

    3 sequências contendo dois números inteiros e uma string, sendo uma sequência para cada localidade. Cada sequência informará o par de coordenadas (X,Y) de uma localidade, na ordem Local 1, Local 2 e Local 3, assim como a situação do trânsito em cada trecho do percurso, ou seja, a situação do trânsito nos trechos (Casa do João, Local 1) para a primeira sequência, situação no trecho (Local 1, Local 2) para a segunda sequência e situação no trecho (Local 2, Local 3) para a última sequência.
    Observações em relação à entrada de dados:

    Os dados de entrada serão fornecidos separados por espaços e em linhas subsequentes.
    A string que indica a situação do trânsito em cada trecho do percurso será fornecida usando apenas a grafia cheio ou livre.
    Saídas:

    Uma string que indica qual meio de transporte João deve utilizar em seu trajeto, de modo a minimizar o tempo total gasto no percurso.
    Número inteiro (arrendondado para cima) que indica a quantidade total de minutos gastos para percorrer o trajeto inteiro com o meio de transporte mais rápido.
    Observações em relação à saída de dados:

    Não haverá casos de empate.
    A string de saída deve obrigatoriamente seguir a grafia Carro ou Bicicleta.
    Exemplo de Entrada:

    3 2 livre
    4 4 cheio
    3 3 livre
    Exemplo de Saída:

    Carro 79
    Exemplo de Entrada:

    5 5 cheio
    6 6 livre
    10 10 cheio
    Exemplo de Saída:

    Bicicleta 251
  */

  int x1, y1, x2, y2, x3, y3;

  return 0;
}