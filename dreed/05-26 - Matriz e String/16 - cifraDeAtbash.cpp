#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    /*
      A cifra de Atbash é uma forma de criptografia antiga, que consiste na substituição da primeira letra pela a última, a segunda pela penúltima, e assim por diante, invertendo o alfabeto usual. Por exemplo, a palavra AJUDA seria transformada em ZQFWZ. Escreva uma função que leia um arquivo texto e escreva a cifra de Atbash correspondente em um outro arquivo texto.

      O programa deve ler um nome de arquivo da entrada padrão, e aplicar a cifra de Atbash em seu conteúdo, escrevendo o resultado num arquivo cujo nome é "cifrado.txt". Suponha que no arquivo de entrada só existem letras maiúsculas sem qualquer tipo de acentos, além de espaços e finais de linha. Os caracteres brancos (espaços e finais de linha) não podem ser modificados.

      Dicas: O caracter A na tabela ASCII vale 65 e o caracter Z vale 90 em decimal. Leia cada frase com getline().

      Entradas:

      Nome de um arquivo a ser lido (não há espaços no nome).
      Conteúdo do arquivo informado.
      Saída:

      Um arquivo cujo nome é "cifrado.txt", contendo o resultado da aplicação da cifra ao conteúdo do arquivo da entrada.
      Exemplo de entrada (conteúdo do arquivo - nome informado pelo usuário):

      EU VOU PRA MARACANGALHA
      EU VOU
      EU VOU COM CHAPEU DE PALHA
      EU VOU
      SE ANALIA NAO QUISER IR
      EU VOU SO
      EU VOU SO
      EU VOU SEM ANALIA MAS EU VOU
      Exemplo de saída (conteúdo do arquivo cujo nome é "cifrado.txt"):

      VF ELF KIZ NZIZXZMTZOSZ
      VF ELF
      VF ELF XLN XSZKVF WV KZOSZ
      VF ELF
      HV ZMZORZ MZL JFRHVI RI
      VF ELF HL
      VF ELF HL
      VF ELF HVN ZMZORZ NZH VF ELF
    */

    // leitura dos dados
    string dados, nomeArq;
    string linha;

    cin >> nomeArq;

    ifstream arquivoIn(nomeArq);
    ofstream arquivoOut("cifrado.txt");

    // processamento
    while (getline(arquivoIn, linha))
    {
        for (long unsigned i = 0; i < linha.size(); i++)
        {
            if (linha[i] != ' ' and linha[i] != '\n')
            {
                // linha[i] - 65 pega o valor de tras para frente
                linha[i] = 90 - (linha[i] - 65);
            }
        }
        arquivoOut << linha << endl;
    }

    // output

    return 0;
}
