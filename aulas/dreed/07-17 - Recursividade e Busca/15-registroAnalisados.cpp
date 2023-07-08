/*
Faça um programa que usa busca binária para procurar nomes num vetor de alunos.

O programa deverá ler dados de vários alunos. Cada aluno deve ser representado por um registro com um número de matrícula e um nome.

Para simplificar, suponha que:

Os nomes não contém espaços em branco.
Os nomes nunca terão mais que 29 caracteres.
Os dados dos alunos já estarão em ordem crescente de número de matrícula.
O programa deve escrever todos os números de matrícula que foram comparados ao número procurado, na ordem da busca. Sempre que não existir um elemento exatamente no meio da região de busca, o elemento anterior (ver texto do exemplo) deve ser considerado o do meio.

Se o número de matrícula procurado não estiver entre os dados lidos inicialmente, o programa simplesmente não escreverá o nome do aluno.

Entradas:
o número de elementos do vetor (número inteiro, numa linha própria),
os elementos do vetor (cada elemento é um número inteiro e um nome, ambos na mesma linha e eles já estarão em ordem crescente de número de matrícula),
o número de matrícula procurado.

Saídas:
Cada número de matrícula que foi comparando durante a busca binária, na ordem.
O nome do aluno cujo número de matrícula foi dado (se ele existir).

Exemplo de entrada:
6
170061 Alberto
170063 Altenor
170068 Alvaro
170073 Aloisio
170074 Alex
170082 Allan
170074
*/
#include <iostream>
using namespace std;

struct Alunos
{
  int matricula;
  string nome;
};


int buscaBinaria(Alunos vetor[], int numeroProcurado, int inicio, int fim, int &index)
{
  if (inicio <= fim)
  {
    index = (inicio + fim) / 2;

    cout << vetor[index].matricula << endl;

    if (vetor[index].matricula == numeroProcurado)
    {
      return index;
    }
    else if (vetor[index].matricula < numeroProcurado)
    {
      inicio = index + 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index);
    }
    else
    {
      fim = index - 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index);
    }
  }
  else
  {
    index = -1;
    return index;
  }

  return 0;
}

int main()
{
  int n;
  cin >> n;

  Alunos aluno[n];

  for (int i = 0; i < n; i++)
  {
    cin >> aluno[i].matricula >> aluno[i].nome;
  }
  
  int indexProcura;
  cin >> indexProcura;

  int inicio = 0;
  int fim = n - 1;
  int indexAchado;

  buscaBinaria(aluno, indexProcura, inicio, fim, indexAchado);

  if (indexAchado > 0)
  {
    cout << aluno[indexAchado].nome << endl;
  }
  else
  {
    cout << endl;
  }

  return 0;
}