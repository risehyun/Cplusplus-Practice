#include <iostream>

using namespace std;
int main()
{
	int aInput[4] = {};
	int bInput[4] = {};
	int result[8] = {};

	int aIndex = 0;
	int bIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> aInput[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> bInput[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (aInput[aIndex] > bInput[bIndex])
		{
			if (bInput[bIndex] > 0)
			{
				result[i] = bInput[bIndex];
				bIndex++;
			}
			else
			{
				result[i] = aInput[aIndex];
				aIndex++;
			}
		}
		else
		{
			if (aInput[aIndex] > 0)
			{
				result[i] = aInput[aIndex];
				aIndex++;
			}
			else
			{
				result[i] = bInput[bIndex];
				bIndex++;
			}
		}
	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << " ";
	}





	return 0;
}