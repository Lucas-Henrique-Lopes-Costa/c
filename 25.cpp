#include <iostream>

using namespace std;

int main()
{
	int nums[15];

	for (int i = 0; i < 15; i++)
	{
		cin >> nums[i];
	}

	int maior = 0;

	for (int i = 0; i < 15; i++)
	{
		if (nums[i] > maior)
		{
			maior = nums[i];
		}
	}

	for (int i = 0; i < 15; i++)
	{
		cout << nums[i] / maior << " ";
	}

	cout << endl;

	return 0;
}
