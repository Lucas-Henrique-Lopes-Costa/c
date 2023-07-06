#include <unistd.h>
#include <fcntl.h>
#include <fstream>

int main()
{
  int fd;
  fd = open("teste.txt", O_CREAT | O_RDWR);
  write(fd, "teste\n", 7);
  close(fd);

  ifstream entrada("teste.txt");
	ofstream saida("resultado.txt");
	char teste[10];
	entrada.read(teste,10);
	saida.write("teste\n",7);

  return 0;
}