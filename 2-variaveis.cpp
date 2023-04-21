#include <iostream>

using namespace std;

int main()
{
  // Bool: em geral, utiliza 1 byte da memória e os valores True ou False.
  // Char: em geral, utiliza 1 byte da memória, permite armazenar um caractere ou cadeia de caracteres.
  // Int: em geral, utiliza 4 bytes de memória e armazena números inteiros (sem casas decimais) com valores que vão de -2.147.483.648 a 2.147.483.647.
  // Double: em geral, utiliza 8 bytes de memória e armazena números com menos de 15 casas decimais com valores que vão de 2.2e-308 a 1.79e308.
  // Float: em geral, utiliza 4 bytes de memória e armazena números com menos de seis casas decimais com valores de vão de 1.2e-38 a 3.4e38.

  cout << "\n";

  int inteiro = 5;
  cout << inteiro << endl;

  int inteiroFalse = 5.2; // forma errado
  cout << inteiroFalse << endl;

  float real;
  real = 5.2;
  cout << real << endl;

  // float realGrande; // forma errada
  // realGrande = 5.2e999999999999;
  // cout << realGrande << endl;

  double realGrande;
  realGrande = 5.2e99;
  cout << realGrande << endl;

  bool booleano;
  booleano = false;
  cout << booleano << endl;

  char letra; // apenas uma letra
  letra = 'bola';
  cout << letra << endl;

  string palavra;
  palavra = "bola";
  cout << palavra << endl;

  int idade;
  cout << "Qual a sua idade?" << endl;
  cin >> idade;
  cout << "Sua idade: ";
  cout << idade << endl;

  cout << "\n";
  return 0;
}