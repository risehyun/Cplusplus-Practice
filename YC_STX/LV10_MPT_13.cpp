#include <iostream>

using namespace std;

int Number[6] = {};
char Command[7] = "";

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> Number[i];
	}

	cin >> Command;

	int max = 0, min = 9, index = 0;

	for (int i = 0; i < 6; i++)
	{
		if (Command[i] == 'm')
		{
			for (int j = 0; j < 6; j++)
			{
				if (Number[j] != -1 && Number[j] < min)
				{
					min = Number[j];
				}
			}

			for (int j = 0; j < 6; j++)
			{
				if (Number[j] == min)
				{
					Number[j] = -1;
				}
			}

			cout << min;
			min = 9;

		}
		else
		{
			for (int j = 0; j < 6; j++)
			{
				if (Number[j] > max)
				{
					max = Number[j];
				}
			}

			for (int j = 0; j < 6; j++)
			{
				if (Number[j] == max)
				{
					Number[j] = -1;
				}
			}

			cout << max;
			max = 0;
		}
	}


	return 0;
}