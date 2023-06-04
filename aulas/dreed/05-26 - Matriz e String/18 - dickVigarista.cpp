#include <iostream>
using namespace std;

int main()
{
  /*
    Dick Vigarista enviou uma mensagem para Muttley, mas por medo da mensagem ser alterada no meio do caminho por inimigos (incluindo o terrível pombo), eles vão utilizar um cálculo de hash para verificar se a mensagem chegou corretamente, sem qualquer modificação. Um hash é um algoritmo que mapeia dados de comprimento variável para dados de comprimento fixo, sendo muito utilizado para fazer verificações (checksums ou hashes). No caso, ele enviará um vetor de palavras, informando antes quantas palavras farão parte da mensagem. Após o envio da última palavra, será enviado um único número para indicar o hash da mensagem.

    O código a seguir faz o hash de uma palavra qualquer, utilizando uma chave baseada em um número primo e um valor inteiro M:
    const int UMPRIMO = 13;
    const int M = 10;
    long hash = 0;

    for (unsigned j = 0; j < palavra.size(); j++) {
            hash = (UMPRIMO * hash + palavra[j]) % M;
    }
    Nesse caso, perceba que o hash vai ser o resto da divisão por 10 a partir de um cálculo com os caracteres da palavra. Ou seja, cada palavra terá um hash entre 0 e 9. O hash da mensagem inteira será o resultado da soma dos hashes individuais. Por exemplo, caso a mensagem enviada seja "muttley faca alguma coisa", cada palavra terá o seguinte hash:
    muttley 6
    faca 1
    alguma 7
    coisa 3
    E nesse caso o hash da mensagem inteira será 17 (soma dos hashes individuais).
    Para auxiliá-los, seu objetivo é implementar um algoritmo que recebe um vetor de palavras, armazenando-o, e imprime o hash individual de cada palavra, bem como o hash da mensagem inteira, utilizando como base o código fornecido acima.

    Entradas:

    Tamanho do vetor
  */

  // leitura dos dados
  int tamanho;
  cin >> tamanho;
  cin.ignore(); // Ignorar a quebra de linha após o tamanho

  // processamento
  const int UMPRIMO = 97;
  const int M = 100;

  int hashTotal = 0;
  for (int i = 0; i < tamanho; i++)
  {
    string palavra;
    cin >> palavra;

    long hash = 0;
    for (unsigned j = 0; j < palavra.size(); j++)
    {
      hash = (UMPRIMO * hash + palavra[j]) % M;
    }

    cout << hash << " ";
    hashTotal += hash;
  }

  // output
  cout << hashTotal << endl;

  return 0;
}
