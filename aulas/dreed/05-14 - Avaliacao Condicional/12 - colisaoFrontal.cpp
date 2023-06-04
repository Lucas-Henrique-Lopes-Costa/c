#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Dois maquinistas estão andando em uma mesma linha de trem em sentido a uma colisão. Faça um programa que dada a velocidade dos trens, calcule o tempo restante para a colisão. Se o tempo para a colisão for menor ou igual a 10 segundos, os trens não conseguem parar e o software deve imprimir a palavra "COLISAO". Caso contrário, o tempo deve ser impresso. Lembrando que a fórmula da distância percorrida é d = v × t e que quando objetos estão dirigindo-se em rota de colisão frontal, deve-se somar as velocidades.

    Entradas:

    Velocidade do trem 1 (número real)
    Velocidade do trem 2 (número real)
    Distância entre os trens (número real)
    
    Saídas:

    A palavra "COLISAO" caso o tempo para a colisão seja menor ou igual a 10 ou o tempo caso contrário.
    Exemplo
  */

  float v1, v2, distancia, tempo;
  cin >> v1 >> v2 >> distancia;

  tempo = distancia / (v1 + v2);

  if (tempo <= 10)
  {
    cout << "COLISAO" << endl;
  }
  else
  {
    cout << fixed << setprecision(2) << tempo << endl;
  }

  return 0;
}