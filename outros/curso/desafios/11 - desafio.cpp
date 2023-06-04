#include <iostream>

using namespace std;

class cidadesbrasil
{
private:
  int populacao, anofundacao;

public:
  void setPopulacao(int populacao)
  {
    this->populacao = populacao;
  }

  int getPopulacao()
  {
    return populacao;
  }

  void setAno(int anofundacao)
  {
    this->anofundacao = anofundacao;
  }

  int getAno()
  {
    return anofundacao;
  }
};


int main()
{
  /*
    Crie um Algoritmo em C++, que tenha uma classe chamada cidadesbrasil, nessa classe, escolha os atributos de cada  ojeto como população, ano de fundação, entre outros.
  */

  cidadesbrasil rioDeJaneiro;
  rioDeJaneiro.setPopulacao(6718903);
  rioDeJaneiro.setAno(1565);
  
  cout << "Rio de Janeiro: " << endl;
  cout << "Populacao: " << rioDeJaneiro.getPopulacao() << endl;
  cout << "Ano Fundacao: " << rioDeJaneiro.getAno() << endl;
  
  cout << endl;

  cidadesbrasil saoPaulo;
  saoPaulo.setPopulacao(12325232);
  saoPaulo.setAno(1554);

  cout << "Rio de Janeiro: " << endl;
  cout << "Populacao: " << saoPaulo.getPopulacao() << endl;
  cout << "Ano Fundacao: " << saoPaulo.getAno() << endl;

  return 0;
}