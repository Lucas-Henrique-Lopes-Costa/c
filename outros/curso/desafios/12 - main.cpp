#include <iostream>
#include "12 - ciadadesBrasil.h"

using namespace std;

int main() {
  /*
    Para cada cidade:
    int anoFundacao, int populacao, int area, int densidade, int idh, int pib, int pibPerCapita, int mortalidadeInfantil, int expectativaVida, int analfabetismo, int escolaridade, int renda, int idhm, int idhmLongevidade, int idhmEducacao, int idhmRenda
  */
  
  cidadesBrasil rioDeJaneiro(1545, 6718903, 120.87, 555, 0.799, 343.8, 51.2, 13.5, 75.4, 3.9, 8.9, 2.2, 0.799, 0.851, 0.739, 0.739);
  cout << "Rio de Janeiro: " << endl;
  cout << "Ano Fundacao: " << rioDeJaneiro.getAnoFundacao() << endl;
  cout << "Populacao: " << rioDeJaneiro.getPopulacao() << endl;
  cout << "Area: " << rioDeJaneiro.getArea() << endl;
  cout << "Densidade: " << rioDeJaneiro.getDensidade() << endl;
  cout << "IDH: " << rioDeJaneiro.getIdh() << endl;
  cout << "PIB: " << rioDeJaneiro.getPib() << endl;
  cout << "PIB Per Capita: " << rioDeJaneiro.getPibPerCapita() << endl;
  cout << "Mortalidade Infantil: " << rioDeJaneiro.getMortalidadeInfantil() << endl;
  cout << "Expectativa de Vida: " << rioDeJaneiro.getExpectativaVida() << endl;
  cout << "Analfabetismo: " << rioDeJaneiro.getAnalfabetismo() << endl;
  cout << "Escolaridade: " << rioDeJaneiro.getEscolaridade() << endl;
  cout << "Renda: " << rioDeJaneiro.getRenda() << endl;
  cout << "IDHM: " << rioDeJaneiro.getIdhm() << endl;
  cout << "IDHM Longevidade: " << rioDeJaneiro.getIdhmLongevidade() << endl;
  cout << "IDHM Educacao: " << rioDeJaneiro.getIdhmEducacao() << endl;
  cout << "IDHM Renda: " << rioDeJaneiro.getIdhmRenda() << endl;

  cout << "Próxima cidade..." << endl;
  system("pause");
  system("cls");

  cidadesBrasil saoPaulo(1554, 12325232, 1522.99, 805, 0.805, 727.0, 59.1, 11.9, 77.4, 2.7, 9.3, 2.4, 0.805, 0.855, 0.774, 0.774);
  cout << "Sao Paulo: " << endl;
  cout << "Ano Fundacao: " << saoPaulo.getAnoFundacao() << endl;
  cout << "Populacao: " << saoPaulo.getPopulacao() << endl;
  cout << "Area: " << saoPaulo.getArea() << endl;
  cout << "Densidade: " << saoPaulo.getDensidade() << endl;
  cout << "IDH: " << saoPaulo.getIdh() << endl;
  cout << "PIB: " << saoPaulo.getPib() << endl;
  cout << "PIB Per Capita: " << saoPaulo.getPibPerCapita() << endl;
  cout << "Mortalidade Infantil: " << saoPaulo.getMortalidadeInfantil() << endl;
  cout << "Expectativa de Vida: " << saoPaulo.getExpectativaVida() << endl;
  cout << "Analfabetismo: " << saoPaulo.getAnalfabetismo() << endl;
  cout << "Escolaridade: " << saoPaulo.getEscolaridade() << endl;
  cout << "Renda: " << saoPaulo.getRenda() << endl;
  cout << "IDHM: " << saoPaulo.getIdhm() << endl;
  cout << "IDHM Longevidade: " << saoPaulo.getIdhmLongevidade() << endl;
  cout << "IDHM Educacao: " << saoPaulo.getIdhmEducacao() << endl;
  cout << "IDHM Renda: " << saoPaulo.getIdhmRenda() << endl;
  
  cout << "Próxima cidade..." << endl;
  system("pause");
  system("cls");
  
  cidadesBrasil brasilia(1960, 3055149, 5801.94, 444, 0.824, 153.4, 51.2, 13.5, 75.4, 3.9, 8.9, 2.2, 0.799, 0.851, 0.739, 0.739);
  cout << "Brasilia: " << endl;
  cout << "Ano Fundacao: " << brasilia.getAnoFundacao() << endl;
  cout << "Populacao: " << brasilia.getPopulacao() << endl;
  cout << "Area: " << brasilia.getArea() << endl;
  cout << "Densidade: " << brasilia.getDensidade() << endl;
  cout << "IDH: " << brasilia.getIdh() << endl;
  cout << "PIB: " << brasilia.getPib() << endl;
  cout << "PIB Per Capita: " << brasilia.getPibPerCapita() << endl;
  cout << "Mortalidade Infantil: " << brasilia.getMortalidadeInfantil() << endl;
  cout << "Expectativa de Vida: " << brasilia.getExpectativaVida() << endl;
  cout << "Analfabetismo: " << brasilia.getAnalfabetismo() << endl;
  cout << "Escolaridade: " << brasilia.getEscolaridade() << endl;
  cout << "Renda: " << brasilia.getRenda() << endl;
  cout << "IDHM: " << brasilia.getIdhm() << endl;
  cout << "IDHM Longevidade: " << brasilia.getIdhmLongevidade() << endl;
  cout << "IDHM Educacao: " << brasilia.getIdhmEducacao() << endl;
  cout << "IDHM Renda: " << brasilia.getIdhmRenda() << endl;
  
  cout << "Próxima cidade..." << endl;
  system("pause");
  system("cls");
  
  cidadesBrasil beloHorizonte(1897, 2523794, 331.40, 761, 0.810, 62.1, 25.0, 13.5, 75.4, 3.9, 8.9, 2.2, 0.799, 0.851, 0.739, 0.739);
  cout << "Belo Horizonte: " << endl;
  cout << "Ano Fundacao: " << beloHorizonte.getAnoFundacao() << endl;
  cout << "Populacao: " << beloHorizonte.getPopulacao() << endl;
  cout << "Area: " << beloHorizonte.getArea() << endl;
  cout << "Densidade: " << beloHorizonte.getDensidade() << endl;
  cout << "IDH: " << beloHorizonte.getIdh() << endl;
  cout << "PIB: " << beloHorizonte.getPib() << endl;
  cout << "PIB Per Capita: " << beloHorizonte.getPibPerCapita() << endl;
  cout << "Mortalidade Infantil: " << beloHorizonte.getMortalidadeInfantil() << endl;
  cout << "Expectativa de Vida: " << beloHorizonte.getExpectativaVida() << endl;
  cout << "Analfabetismo: " << beloHorizonte.getAnalfabetismo() << endl;
  cout << "Escolaridade: " << beloHorizonte.getEscolaridade() << endl;
  cout << "Renda: " << beloHorizonte.getRenda() << endl;
  cout << "IDHM: " << beloHorizonte.getIdhm() << endl;
  cout << "IDHM Longevidade: " << beloHorizonte.getIdhmLongevidade() << endl;
  cout << "IDHM Educacao: " << beloHorizonte.getIdhmEducacao() << endl;
  cout << "IDHM Renda: " << beloHorizonte.getIdhmRenda() << endl;
  
  return 0;
}