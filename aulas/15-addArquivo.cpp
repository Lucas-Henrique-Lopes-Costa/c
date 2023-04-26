#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ofstream foutput;
  ifstream finput;

  finput.open("apnd.txt");
  foutput.open("apnd.txt", ios::app);

  if (finput.is_open())
  {
    foutput << "\nWrite here whatever you want to store in the text file.\n";

    cout << "\n Data has been appended to file";
  }

  finput.close();
  foutput.close();

  return 0;
}