#include <iostream>

using namespace std;
int main()
{
	char str[10] = "ATKPTCABC";

	char aInput = ' ', bInput = ' ';

	int aOffSet = 0, bOffSet = 0;

	cin >> aInput >> bInput;

	for (int i = 0; i < 10; i++)
	{
		if (str[i] == aInput)
		{
			for (int j = i; j < 10; j++)
			{
				if (str[j] != bInput)
				{
					aOffSet++;
				}
				else
				{
					break;
				}
			}
		}
	}

	for (int i = 9; i >= 0; i--)
	{
		if (str[i] == bInput)
		{
			for (int j = i; j > 0; j--)
			{
				if (str[j] != aInput)
				{
					bOffSet++;
				}
				else
				{
					break;
				}
			}
		}
	}

	cout << aOffSet << endl;
	cout << bOffSet << endl;

	return 0;
}