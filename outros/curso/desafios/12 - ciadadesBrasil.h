class cidadesBrasil
{
private:
  int anoFundacao, populacao, area, densidade, idh, pib, pibPerCapita, mortalidadeInfantil, expectativaVida, analfabetismo, escolaridade, renda, idhm, idhmLongevidade, idhmEducacao, idhmRenda;
public:
  cidadesBrasil(int anoFundacao, int populacao, int area, int densidade, int idh, int pib, int pibPerCapita, int mortalidadeInfantil, int expectativaVida, int analfabetismo, int escolaridade, int renda, int idhm, int idhmLongevidade, int idhmEducacao, int idhmRenda);

  void setAnoFundacao(int anoFundacao);
  int getAnoFundacao();

  void setPopulacao(int populacao);
  int getPopulacao();

  void setArea(int area);
  int getArea();

  void setDensidade(int densidade);
  int getDensidade();

  void setIdh(int idh);
  int getIdh();

  void setPib(int pib);
  int getPib();

  void setPibPerCapita(int pibPerCapita);
  int getPibPerCapita();

  void setMortalidadeInfantil(int mortalidadeInfantil);
  int getMortalidadeInfantil();

  void setExpectativaVida(int expectativaVida);
  int getExpectativaVida();

  void setAnalfabetismo(int analfabetismo);
  int getAnalfabetismo();

  void setEscolaridade(int escolaridade);
  int getEscolaridade();

  void setRenda(int renda);
  int getRenda();

  void setIdhm(int idhm);
  int getIdhm();

  void setIdhmLongevidade(int idhmLongevidade);
  int getIdhmLongevidade();

  void setIdhmEducacao(int idhmEducacao);
  int getIdhmEducacao();

  void setIdhmRenda(int idhmRenda);
  int getIdhmRenda();
};