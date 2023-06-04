#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  // strcat - realiza a concatenação de duas strings

  char text1[50] = "Hello";
  char text2[50] = "World";

  strcat(text1, text2); // text1 = text1 + text2

  // strcpy - copia uma string para outra

  char text1[50] = "Hello";
  char text2[50] = "";

  strcpy(text2, text1);

  // strstr - verifica se uma string está contida em outra

  char text1[50] = "Hello";
  char text2[50] = "ell";

  if (strstr(text1, text2) != NULL)
  {
    cout << "Text2 está contido em text1" << endl;
  }
  else
  {
    cout << "Text2 não está contido em text1" << endl;
  }

  // strtok - divide uma string em partes

  char text1[50] = "Hello World";
  char text2[50] = " ";

  char *token = strtok(text1, text2); // sempre usar ponteiro

  while (token != NULL) //null evita 
  {
    cout << token << endl;
    token = strtok(NULL, text2);
  }

  // strlen - retorna o tamanho de uma string

  char text1[50] = "Hello World";

  cout << strlen(text1) << endl;

  // strcmp - compara duas strings

  char text1[50] = "Hello";

  if (strcmp(text1, "Hello") == 0)
  {
    cout << "As strings são iguais" << endl;
  }
  else
  {
    cout << "As strings são diferentes" << endl;
  }

  return 0;
}