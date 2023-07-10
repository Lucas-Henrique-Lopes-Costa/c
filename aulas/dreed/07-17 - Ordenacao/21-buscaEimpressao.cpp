/*
Com a proximidade das férias, você resolveu fazer um programa para organizar seus memes. Para isso, você verifica que precisará implementar um algoritmo para cadastrar, ordenar e buscar valores num vetor de registros. Cada registro conterá os seguintes dados: número do meme, nome do arquivo (sem espaços), assunto (sem espaços) e site. Como você pretende futuramente expandir o aplicativo, o programa será construído utilizando módulos.

Assim, o programa deve ter módulos distintos para:

ler valores, preenchendo o vetor de registros;
ordenar os elementos de um vetor, utilizando o número do meme como chave, utilizando o algoritmo Selection Sort;
imprimir todos os memes de um dado site passado como parâmetro. A impressão deverá ser realizada no vetor já ordenado.
Outros módulos são opcionais.

O módulo principal deve:
ler a quantidade de elementos a ser processada;
ativar o módulo que lê os elementos do vetor;
ativar o módulo que ordena o vetor pelo número do meme;
ler o site para busca;
ativar o módulo que imprime os memes que pertençam a um dado site. Caso não exista nenhum meme daquele site, deverá ser impresso a mensagem Inexistente. Os dados do memes do site devem ser impressos seguindo a ordem do vetor já ordenado. Os campos deverão ser impressos na mesma ordem de leitura.
A ordem de entrada dos dados dos registros é a seguinte:

num_do_meme   nome_do_arquivo   assunto   site

Exemplo de entrada:
5
5 xxx.jpg minions 9gag
3 yyy.jpg funk nuintendo
2 zzz.jpg minions nuintendo
1 ppp.jpg funk 9gag
6 qqq.jpg politica facebook
9gag

Exemplo de saída:
1 ppp.jpg funk 9gag
5 xxx.jpg minions 9gag

Exemplo de entrada:
8 
91 1.jpg minions reddit
18 2.jpg minions 9gag
21 3.jpg minions facebook
45 4.jpg minions nuintendo
15 5.jpg temer capinaremos
55 6.jpg temer capinaremos
78 7.jpg temer facebook
9  8.jpg temer 9gag
4chan

Exemplo de saída:
Inexistente

Exemplo de entrada:
4
8 a.jpg trump 9gag
6 b.jpg trump 9gag
3 c.jpg trump 9gag
1 d.jpg trump 9gag
9gag

Exemplo de saída:
1 d.jpg trump 9gag
3 c.jpg trump 9gag
6 b.jpg trump 9gag
8 a.jpg trump 9gag
*/
#include <iostream>
using namespace std;

struct Meme
{
  int num;
  string nome;
  string assunto;
  string site;
};

void leitura(Meme vet[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    cin >> vet[i].num;
    cin >> vet[i].nome;
    cin >> vet[i].assunto;
    cin >> vet[i].site;
  }
}

void ordenacao(Meme vet[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < n; j++)
    {
      if (vet[j].num < vet[menor].num)
      {
        menor = j;
      }
    }
    swap(vet[i], vet[menor]);
  }
}

void impressao(Meme vet[], int n, string site)
{
  bool existe = false;
  for (int i = 0; i < n; i++)
  {
    if (vet[i].site == site)
    {
      cout << vet[i].num << " " << vet[i].nome << " " << vet[i].assunto << " " << vet[i].site << endl;
      existe = true;
    }
  }
  if (!existe)
  {
    cout << "Inexistente" << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  Meme vetor[n];
  leitura(vetor, n);

  ordenacao(vetor, n);

  string site;
  cin >> site;

  impressao(vetor, n, site);

  return 0;
}