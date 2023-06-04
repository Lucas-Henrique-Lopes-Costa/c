#include <iostream>
#include "12 - ciadadesBrasil.h"

using namespace std;

cidadesBrasil(int anoFundacao, int populacao, int area, int densidade, int idh, int pib, int pibPerCapita, int mortalidadeInfantil, int expectativaVida, int analfabetismo, int escolaridade, int renda, int idhm, int idhmLongevidade, int idhmEducacao, int idhmRenda)
{
  this->anoFundacao = anoFundacao;
  this->populacao = populacao;
  this->area = area;
  this->densidade = densidade;
  this->idh = idh;
  this->pib = pib;
  this->pibPerCapita = pibPerCapita;
  this->mortalidadeInfantil = mortalidadeInfantil;
  this->expectativaVida = expectativaVida;
  this->analfabetismo = analfabetismo;
  this->escolaridade = escolaridade;
  this->renda = renda;
  this->idhm = idhm;
  this->idhmLongevidade = idhmLongevidade;
  this->idhmEducacao = idhmEducacao;
  this->idhmRenda = idhmRenda;
}

void cidadesBrasil::setAnoFundacao(int anoFundacao)
{
  this->anoFundacao = anoFundacao;
}

int cidadesBrasil::getAnoFundacao()
{
  return this->anoFundacao;
}

void cidadesBrasil::setPopulacao(int populacao)
{
  this->populacao = populacao;
}

int cidadesBrasil::getPopulacao()
{
  return this->populacao;
}

void cidadesBrasil::setArea(int area)
{
  this->area = area;
}

int cidadesBrasil::getArea()
{
  return this->area;
}

void cidadesBrasil::setDensidade(int densidade)
{
  this->densidade = densidade;
}

int cidadesBrasil::getDensidade()
{
  return this->densidade;
}

void cidadesBrasil::setIdh(int idh)
{
  this->idh = idh;
}

int cidadesBrasil::getIdh()
{
  return this->idh;
}

void cidadesBrasil::setPib(int pib)
{
  this->pib = pib;
}

int cidadesBrasil::getPib()
{
  return this->pib;
}

void cidadesBrasil::setPibPerCapita(int pibPerCapita)
{
  this->pibPerCapita = pibPerCapita;
}

int cidadesBrasil::getPibPerCapita()
{
  return this->pibPerCapita;
}

void cidadesBrasil::setMortalidadeInfantil(int mortalidadeInfantil)
{
  this->mortalidadeInfantil = mortalidadeInfantil;
}

int cidadesBrasil::getMortalidadeInfantil()
{
  return this->mortalidadeInfantil;
}

void cidadesBrasil::setExpectativaVida(int expectativaVida)
{
  this->expectativaVida = expectativaVida;
}

int cidadesBrasil::getExpectativaVida()
{
  return this->expectativaVida;
}

void cidadesBrasil::setAnalfabetismo(int analfabetismo)
{
  this->analfabetismo = analfabetismo;
}

int cidadesBrasil::getAnalfabetismo()
{
  return this->analfabetismo;
}

void cidadesBrasil::setEscolaridade(int escolaridade)
{
  this->escolaridade = escolaridade;
}

int cidadesBrasil::getEscolaridade()
{
  return this->escolaridade;
}

void cidadesBrasil::setRenda(int renda)
{
  this->renda = renda;
}

int cidadesBrasil::getRenda()
{
  return this->renda;
}

void cidadesBrasil::setIdhm(int idhm)
{
  this->idhm = idhm;
}

int cidadesBrasil::getIdhm()
{
  return this->idhm;
}

void cidadesBrasil::setIdhmLongevidade(int idhmLongevidade)
{
  this->idhmLongevidade = idhmLongevidade;
}

int cidadesBrasil::getIdhmLongevidade()
{
  return this->idhmLongevidade;
}

void cidadesBrasil::setIdhmEducacao(int idhmEducacao)
{
  this->idhmEducacao = idhmEducacao;
}

int cidadesBrasil::getIdhmEducacao()
{
  return this->idhmEducacao;
}

void cidadesBrasil::setIdhmRenda(int idhmRenda)
{
  this->idhmRenda = idhmRenda;
}

int cidadesBrasil::getIdhmRenda()
{
  return this->idhmRenda;
}
