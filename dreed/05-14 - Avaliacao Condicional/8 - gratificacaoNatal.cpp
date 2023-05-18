#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Uma empresa decidiu dar uma gratificação de natal a seus funcionários, baseada no número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:

    H=número de horas extras - (2/3*(número de horas-faltas))

    H(Minutos)	Prêmio(R$)
    Maior que 2400	500
    Entre 1800 e 2400 (incluso)	400
    Entre 1200 e 1800 (incluso)	300
    Entre 600 e 1200 (incluso)	200
    Menor igual a 600	100
    Entradas:

    Número de horas extras (float).
    Número de horas-faltas (float).
    Saídas:

    Prêmio que o funcionário irá receber.
    Exemplo de Entrada:

    24
    3
    Exemplo de Saída:

    300
  */

  float H, horasExtras, horasFaltas;
  cin >> horasExtras >> horasFaltas;

  H = (horasExtras * 60) - (2.0 / 3.0 * (horasFaltas * 60));

  if (H > 2400)
    cout << 500 << endl;
  else if (H >= 1800 && H <= 2400)
    cout << 400 << endl;
  else if (H >= 1200 && H <= 1800)
    cout << 300 << endl;
  else if (H >= 600 && H <= 1200)
    cout << 200 << endl;
  else
    cout << 100 << endl;

  return 0;
}