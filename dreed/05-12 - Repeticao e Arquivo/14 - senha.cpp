#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    O namorado é um expert em informática e resolveu ajudar a sua gatinha a configurar o seu novo celular. Depois de instalar e configurar tudo, ele colocou uma senha para acesso ao celular. Porém, esqueceu de dizer a ela qualquer era a senha de acesso. Disse apenas que era a data de aniversário, mas não disse de quem.

    Para usar o seu novo celular, ela irá tentar adivinhar a senha na base do "chute". O sistema do celular permite até 4 tentativas antes de bloquear. Assim, ela precisa fazer as tentativas o melhor possível. Sabendo que a senha do celular é "23031999", faça um programa que recebe as senhas "chutadas" por ela como entrada, no arquivo tentativas.txt, e calcula quantos vezes ela tentou para acertar a senha. Ela deve parar de tentar se acertar a senha ou estourar o número máximo de tentativas.

    Obs: Considere que se a entrada possuir menos de 4 senhas, a última senha será a senha correta. Serão sempre dadas no máximo 4 senhas.

    O programa deve exibir se ela conseguiu ou não acessar seu celular ("acessou", "nao") e o número de tentativas.

    Entradas:

    Senhas (tentativas - arquivo tentativas.txt).
    Saídas:

    "acessou" ou "nao", e o número de tentativas, na mesma linha.
    Exemplo de Entrada (arquivo tentativas.txt):

    15112000
    05102001
    23031999
    Exemplo de Saída:

    acessou 3
    Exemplo de Entrada arquivo tentativas.txt):

    23121999
    09071997
    18082002
    01012000
    Exemplo de Saída:

    nao 4
  */

  ifstream arquivo("tentativas.txt");

  string senha;
  int tentativas = 0;

  while (arquivo >> senha)
  {
    tentativas++;

    if (senha == "23031999")
    {
      cout << "acessou " << tentativas << endl;
      return 0;
    }

    if (tentativas == 4)
    {
      cout << "nao 4" << endl;
      return 0;
    }
  }
  return 0;
}
