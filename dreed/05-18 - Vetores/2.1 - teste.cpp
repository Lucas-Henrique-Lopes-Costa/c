#include <iostream>

using namespace std;

int main()
{

  // Declaração de Vetores e valores
  int n;
  cin >> n;
  int vet[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vet[i];
  }

  // Verificando se um número par é capicua
  int contPar = 0;
  if (n % 2 == 0)
  {
    for (int i = 0; i < n / 2; i++)
    {
      if (vet[i] == vet[n - i - 1])
      {
        contPar++;
      }
    }

    if (contPar == n / 2)
    {
      for (int i = 0; i < n / 2; i++)
      {
        cout << i << " " << vet[i] << " " << n - 1 - i << " " << vet[n - i - 1] << " ";
      }
      cout << endl
           << "sim" << endl;
    }
    else
    {
      int i = 0;
      while (vet[i] == vet[n - i - 1])
      {
        cout << i << " " << vet[i] << " " << n - 1 - i << " " << vet[n - i - 1] << " ";
        i++;
      }

      cout << endl
           << "nao" << endl;
    }
  }

  // Verificando se um número Impar é capicua
  int contImpar = 0;
  if (n % 2 != 0)
  {
    for (int i = 0; i < (n - 1) / 2; i++)
    {
      if (vet[i] == vet[n - i - 1])
      {
        contImpar++;
      }
    }
    // TESTE
    //  cout<<contImpar<<endl;

    // Se o numero for Capicua
    if (contImpar == (n - 1) / 2)
    {
      for (int i = 0; i < (n - 1) / 2; i++)
      {

        cout << i << " " << vet[i] << " " << n - 1 - i << " " << vet[n - i - 1] << " ";
      }

      // Teste
      // cout<<endl<<" NUMERO QUE TA NO MEIO E POSICAO DELE"<<endl;
      cout << (n - 1) / 2 << " " << vet[(n - 1) / 2];
      cout << endl
           << "sim" << endl;
    }
    else
    {
      int i = 0;
      int contAux = 0;
      while (vet[i] == vet[n - i - 1])
      {
        cout << i << " " << vet[i] << " " << n - 1 - i << " " << vet[n - i - 1] << " ";
        i++;
        contAux++;
      }
      if (contAux != 0)
      {
        cout << endl;
      }

      cout << "nao" << endl;
    }
  }

  return 0;
}