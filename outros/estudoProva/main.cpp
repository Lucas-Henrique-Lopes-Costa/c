#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  // Entrada dos Dados
  // 1 - Ler o arquivo
  ifstream arquivo("questoes.txt");
  if (!arquivo.is_open())
  {
    cout << "Erro ao abrir o arquivo" << endl;
    return 0;
  }

  // 2 - Armazenar os dados em um vetor
  string nomeAtividade;
  int qtdQuestoes;

  string atividades[10];
  int qtdQuestoesAtividades[10];

  int i = 0;

  while (arquivo >> nomeAtividade >> qtdQuestoes)
  {
    atividades[i] = nomeAtividade;
    qtdQuestoesAtividades[i] = qtdQuestoes;

    i++;
  }

  // Sortear uma atividade
  srand(time(0)); // Isso configura a semente do gerador de números aleatórios usando a função time(0), que retorna o número de segundos desde 1º de janeiro de 1970. Isso garante que cada execução do programa tenha uma sequência de números aleatórios única.

  int atividadeIndex = rand() % i; // A função rand() retorna um número inteiro pseudoaleatório. O operador % é usado para calcular o resto da divisão entre rand() e i. Assim, rand() % i gera um número aleatório no intervalo de 0 a i-1, que é o índice máximo válido para o vetor atividades. Esse número aleatório é armazenado na variável atividadeIndex.

  string atividadeSorteada = atividades[atividadeIndex];
  int qtdQuestoesSorteadas = qtdQuestoesAtividades[atividadeIndex];

  // Sortear uma questão
  int questaoSorteada = rand() % qtdQuestoesSorteadas + 1;

  // Exibir a Atividade e a Questão
  cout << "Atividade sorteada: " << atividadeSorteada << endl;
  cout << "Questao sorteada: " << questaoSorteada << endl;
  cout << "Acesse as questões aqui: https://github.com/Lucas-Henrique-Lopes-Costa/c/blob/27482b30690c101b9cdd5cfc07144664112d2a89/aulas" << endl;

  return 0;
}
