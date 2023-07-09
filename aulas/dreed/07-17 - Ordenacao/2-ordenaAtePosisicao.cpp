/*
Nem sempre deseja-se ordenar um vetor inteiro. Faça um programa que receba um conjunto de inteiros e a posição (índice) do vetor até onde deseja-se ordenar. A ordenação deverá ser por ordem decrescente, usando selectionsort, de tal forma que os primeiros elementos são os maiores do vetor todo, mas após a ordenação parcial, os últimos elementos não estão necessariamente ordenados.

Você deverá adaptar o trecho de código a seguir do algoritmo selectionsort com ordenação crescente. Atenção com a implementação de algoritmos clássicos: adicionar testes ou variáveis, introduzir processamento desnecessário resultará em perda de pontos na avaliação manual. Os nomes das variáveis devem ser significativos: altere os nomes conforme necessário para que continuem sendo significativos após as modificações realizadas.

Use modularização. Não misture interface e processamento.

for (int i=0; i < tam-1; ++i) {
    posMenor = i;
    for (int j=i+1; j < tam; ++j) {
        if (vetor[j] < vetor[posMenor])
            posMenor = j;
    }
    aux = vetor[i];
    vetor[i] = vetor[posMenor];
    vetor[posMenor] = aux;
}

Entradas:
Tamanho do vetor
Os elementos do vetor (números inteiros)
Posição até onde o vetor deve ser ordenado.

Saídas:
Todo o vetor resultante.

Exemplo de Entrada:
5
1 3 4 5 2
2

Exemplo de Saída:
5 4 3 1 2
*/
#include <iostream>
using namespace std;

void ordenaAte(int ateOndeOrdena, int vetor[], int n)
{
  for (int i = 0; i < ateOndeOrdena - 1; i++)
  {
    int posMenor = i;
    for (int j = i + 1; j < n; j++)
    {
      if (vetor[j] > vetor[posMenor])
        posMenor = j;
    }
    int aux = vetor[i];
    vetor[i] = vetor[posMenor];
    vetor[posMenor] = aux;
  }
}

int main()
{
  int n;
  cin >> n;

  int vetor[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  int ateOndeOrdena;
  cin >> ateOndeOrdena;

  ordenaAte(ateOndeOrdena, vetor, n);

  for (int i = 0; i < n; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}