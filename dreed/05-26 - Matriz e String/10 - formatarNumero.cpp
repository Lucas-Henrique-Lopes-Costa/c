#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
  /*
    Faça um programa que recebe um número inteiro com no mínimo 3 dígitos e cria uma representação textual para o número com vírgula antes dos dois últimos dígitos, além de pontos para separar os outros dígitos de três em três para facilitar a leitura.

    Como o número pode ter muitos dígitos, e eles devem ser processados individualmente, é recomendável que seu armazenamento seja feito numa string (array de char) com capacidade para cerca de 40 dígitos. O número processado também deve usar o mesmo tipo.

    O programa não deve apenas escrever o número formatado, ele deve guardar a string numa variável (vetor) antes de escrever.

    Exemplo de entrada:
    2187483647

    Exemplo de saída:
    21.874.836,47
  */

  // leitura dos dados
  int numero;
  cin >> numero;

  // converter para string
  string numeroString = to_string(numero);

  // processamento

  // 1. separar os dois últimos dígitos
  string ultimosDoisDigitos = numeroString.substr(numeroString.length() - 2, 2);

  // 2. separar os outros dígitos de três em três
  string outrosDigitos = numeroString.substr(0, numeroString.length() - 2);

  // 3. inserir os pontos e a vírgula
  string numeroFormatado = outrosDigitos;

  if (outrosDigitos.length() > 3)
  {
    for (int i = outrosDigitos.length() - 3; i >= 0; i -= 3)
    {
      numeroFormatado.insert(i, ".");
    }
  }

  // output
  cout << numeroFormatado << "," << ultimosDoisDigitos << endl;

  return 0;
}
