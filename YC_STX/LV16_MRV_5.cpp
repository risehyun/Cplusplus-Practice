#include <iostream>

using namespace std;
int main()
{
	int input = 0;
	int result[5] = {};

	cin >> input;

	result[4] = (input % 10);
	result[3] = (input % 100) / 10;
	result[2] = (input % 1000) / 100;
	result[1] = (input % 10000) / 1000;
	result[0] = (input % 100000) / 10000;

	for (int i = 0; i < 5; i++)
	{
		result[i] += 1;

		if (result[i] > 9 && i < 4)
		{
			result[i] = 10 - result[i];
			result[i + 1] += 1;
		}
	
	}

	for (int i = 4; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}