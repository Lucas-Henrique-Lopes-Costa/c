#include <iostream>

using namespace std;

int main()
{
   int a, cont=0, multiplicador=1;

   cin >> a;
   
   while (cont < 10)
   {
    cout << a << " x " << multiplicador << " = " << a * multiplicador << endl;
    cont++;
    multiplicador++;

   }
   

    return 0;
}