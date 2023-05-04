#include <iostream>

using namespace std;

class mandarMensagem
{
private:
public:
  void mensagem()
  {
    cout << "Hello World!" << endl;
  }
};

class carro
{
private:
  int ano;
  float valor, km;

public:
  // Get and Set
  void setAno(int a)
  {
    ano = a;
  }

  int getAno()
  {
    return ano;
  }

  void setValor(float valor)
  {
    this->valor = valor;
  }

  int getValor()
  {
    return valor;
  }

  void setKm(float Km)
  {
    km = Km;
  }

  int getKm()
  {
    return km;
  }
};

class publico
{
private:
  int idade;
  float dinheiro;

public:
  // Construtor
  publico(int i = -1, float d = -1)
  {
    idade = i;
    dinheiro = d;
  }

  int getIdade()
  {
    return idade;
  }
  int getDinheiro()
  {
    return dinheiro;
  }
};

class oferta
{
private:
  float dinheiro;

public:
  // Construtor
  oferta(float d);
  int getDinheiro();
};

int main()
{
  mandarMensagem enviar;
  enviar.mensagem();

  publico publicoPalio(20, 50000);
  cout << "Idade para comprar o Palio: " << publicoPalio.getIdade() << endl;
  cout << "Dinheiro necessario para comprar o Palio: " << publicoPalio.getDinheiro() << endl;

  cout << endl;

  carro palio;
  palio.setAno(1995);
  palio.setValor(10000);
  palio.setKm(5000);

  cout << "Palio" << endl;
  cout << "Ano: " << palio.getAno() << endl;
  cout << "Valor: " << palio.getValor() << endl;
  cout << "Km: " << palio.getKm() << " km" << endl;
  
  cout << endl;

  oferta Paulo(60000);
  cout << "Ofeta de Pedro: " << Paulo.getDinheiro() << endl;

  cout << endl;

  publico publicoCamaro(25, 500000);
  cout << "Idade para comprar o Camaro: " << publicoCamaro.getIdade() << endl;
  cout << "Dinheiro necessario para comprar o Camaro: " << publicoCamaro.getDinheiro() << endl;

  cout << endl;

  carro Camaro;
  Camaro.setAno(2022);
  Camaro.setValor(200000);
  Camaro.setKm(1000);

  cout << "Camaro" << endl;
  cout << "Ano: " << Camaro.getAno() << endl;
  cout << "Valor: " << Camaro.getValor() << endl;
  cout << "Km: " << Camaro.getKm() << " km" << endl;

  return 0;
}

oferta::oferta(float d=-1) {
  dinheiro = d;
}

int oferta::getDinheiro() {
  return dinheiro;
}