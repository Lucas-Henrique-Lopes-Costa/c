#include <iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	
	int vetor1[n];

	for(int i = 0; i<n; i++)
	{
		cin>>vetor1[i];
	}

	
	
	int cont5 = 0;
	
	for (int j = 0; j < n; j++)
	{
		if(vetor1[j] == 5)
		{
			cont5++;
		}
	}
	
	cout << "5: " << cont5 / (float)n << endl;
	
	int cont4 = 0;
	
	for (int j = 0; j < n; j++)
	{
		if(vetor1[j] == 4)
		{
			cont4++;
		}
	}
	
	cout << "4: " << cont4 / (float)n << endl;
	
	int cont3 = 0;
	
	for (int j = 0; j < n; j++)
	{
		if(vetor1[j] == 3)
		{
			cont3++;
		}
	}
	
	cout << "3: " << cont3 / (float)n << endl;
	
	int cont2 = 0;
	
	for (int j = 0; j < n; j++)
	{
		if(vetor1[j] ==2 )
		{
			cont2++;
		}
	}
	
	cout << "2: " << cont2 / (float)n << endl;
	
	int cont1 = 0;
	
	for (int j = 0; j < n; j++)
	{
		if(vetor1[j] == 1)
		{
			cont1++;
		}
	}
	
	cout << "1: " << cont1 / (float)n << endl;















    return 0;
}
