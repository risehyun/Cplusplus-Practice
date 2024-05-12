#include <iostream>

using namespace std;
int main()
{
	char town[7] = { 'A', 'B', 'C', 'Z', 'E', 'T', 'Q' };

	char blackList[5] = {};

	int result[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cin >> blackList[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (blackList[i] == town[j])
			{
				result[i] = 1;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{	
		cout << blackList[i] << "=";

		if (result[i] == 1)
		{
			cout << "마을사람" << endl;
		}
		else
		{
			cout << "외부사람" << endl;
		}
	}

	return 0;
}