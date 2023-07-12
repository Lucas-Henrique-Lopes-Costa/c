#include <iostream>
using namespace std;

struct livro
{
   string titulo, autor;
   int quantidade[5];
   float preco;
};

int main()
{
   const int acervo = 2;
   int i, j, posicao;
   string busca;
   livro livraria[acervo];

   for (i = 0; i < acervo; i++)
   {
      cout << "Livro " << i + 1 << endl;

      cout << "Titulo: ";
      getline(cin, livraria[i].titulo);

      cout << "Autor: ";
      getline(cin, livraria[i].autor);
      for (j = 0; j < 5; j++)
      {
         cout << "Quantidade do livro na loja " << j + 1 << ": ";
         cin >> livraria[i].quantidade[j];
      }
      cout << "Preco: ";
      cin >> livraria[i].preco;
      cin.ignore();
   }

   cout << "Titulo do livro de busca: ";
   getline(cin, busca);

   i = 0;
   posicao = -1;
   while ((i < acervo) && (busca != livraria[i].titulo))
      i++;
   if (busca == livraria[i].titulo)
      posicao = i;

   if (posicao == -1)
      cout << "O livro nao esta disponivel." << endl;
   else
   {
      cout << "Preco: R$" << livraria[i].preco << endl;
      // imprime a soma das quantidades em estoque
      int soma = 0;
      for (j = 0; j < 5; j++)
         soma += livraria[i].quantidade[j];
      cout << "Quantidade em estoque: " << soma << endl;
   }
}
