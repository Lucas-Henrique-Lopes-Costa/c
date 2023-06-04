#include <iostream>
using namespace std;

int locaGratis(int filmes)
{
  return (filmes / 10);
}

int main()
{
  /*
    Uma locadora de vídeos tem guardada, em um vetor de 10 posições, a quantidade de filmes retirados por seus clientes durante cada ano. Agora, esta locadora está fazendo uma promoção e, para cada 10 filmes retirados, o cliente tem direito a uma locação grátis. Faça um algoritmo que, utilizando uma função, preencha um outro vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito.

    Entradas:
    10 inteiros representando os filmes de locação
    
    Saídas:
    Quantidade de locação gratis cada cliente terá(inteiro)
    
    Exemplo de Entrada:
    80 12 50 22 12 99 5 51 44 36
    
    Exemplo de Saída:
    8 1 5 2 1 9 0 5 4 3 
  */
  
  int numeros[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> numeros[i];
  }

  for (int i = 0; i < 10; i++)
  {
    cout << locaGratis(numeros[i]) << " ";
  }

  cout << endl;
  
  return 0;
}
