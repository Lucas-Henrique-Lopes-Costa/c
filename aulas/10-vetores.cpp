#include <iostream>

using namespace std;

int main()
{
  system("clear||cls");

  int vet[4] = {5, 10};
  // vet[0] = 5;
  // vet[1] = 10;

  int vetorial[] = {5, 10};

  cout << vet[0] << endl;
  cout << vet[1] << endl;
  cout << vet[2] << endl;
  cout << vet[3] << endl;
  cout << vet[4] << endl;

  cout << "Vetorial:" << endl;

  cout << vetorial[0] << endl;
  cout << vetorial[1] << endl;
  cout << vetorial[2] << endl;
  cout << vetorial[3] << endl;
  cout << vetorial[4] << endl;

  cout << "Usando o for:" << endl;

  for (int i = 0; i < 4; i++)
  {
    cout << vet[i] << endl;
  }

  int x = sizeof(vet); // tamanho de bits -> 4 inteiros = 16 bits
  int length = sizeof(vet) / sizeof(int);
  cout << "Tamanho do vetor: " << x << endl;
  cout << "Quantidade de itens do vetor: " << length << endl;

  // Alocação Dinânica
  int tamanho;
  cout << "Digite o tamanho do vetor!" << endl;
  cin >> tamanho;

  int *vetor = new int[tamanho];

  for (int i = 0; i < tamanho; i++)
  {
    cout << "Digite o elemento " << i << " do vetor: " << endl;
    cin >> vetor[i];
  }

  cout << "Seu Vetor e:" << endl;
  for (int i = 0; i < tamanho; i++)
  {
    cout << vetor[i] << " ";
  }
  
  delete [] vetor;

  return 0;
}