/*
Escreva um programa que leia duas cadeias de caracteres e concatene a segunda cadeia ao final da primeira. As duas cadeias de entrada devem ser declaradas como vetores de caracteres com capacidade fixa, capazes de armazenar 100 caracteres úteis de texto cada. Essas duas entradas não podem ser alteradas durante a execução do programa. A cadeia resultante deve ser armazenada num vetor dinâmico. As duas entradas serão caracteres separados por espaços e, além da concatenação, um espaço deve ser inserido entre as sequências de forma que o resultado continue sendo uma sequência de caracteres separados por espaços. O resultado dessa inserção e concatenação precisa existir no vetor antes de ser escrito.

Calcule a quantidade de memória necessária para armazenar o resultado da concatenação antes de alocar memória para o resultado. A alocação deve reservar a quantidade exata de memória para guardar o resultado. Obs: Em C++, a função strlen da biblioteca cstring pode ser usada para calcular o número de caracteres úteis de um vetor de char. Você pode utilizar as funções strcpy, memcpy ou similares para resolver o problema, caso ache interessante. Soluções usando a classe string serão desconsideradas.

Não é permitido o uso da classe vector.

Entradas:
Caracteres do primeiro vetor
Caracteres do segundo vetor

Saídas:
Vetor resultante da concatenação do primeiro vetor com o segundo

Exemplo de Entrada:
q w e r t y u i o p
m n b v c x z

Exemplo de Saída:
q w e r t y u i o p m n b v c x z
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int tamanho = 5;
  int *vetor = new int[tamanho];

  int transformacoes = 0;

  int numero;
  cin >> numero;
  int index = 0;

  while (numero > 0)
  {
    vetor[index] = numero;

    index++;

    if (index == tamanho)
    {
      int *novoVetor = new int[tamanho + 5];

      for (int i = 0; i < tamanho; i++)
        novoVetor[i] = vetor[i];

      delete[] vetor;

      vetor = novoVetor;

      tamanho += 5;

      transformacoes++;
    }

    cin >> numero;
  }

  for (int i = 0; i < index; i++)
    cout << vetor[i] << " ";

  cout << endl;

  cout << tamanho << endl;
  cout << transformacoes << endl;

  return 0;
}
