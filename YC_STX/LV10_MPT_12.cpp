#include <iostream>

using namespace std;
int main()
{
	char input[16] = "";
	int count = 0;

	char aResult[5] = {};
	char bResult[5] = {};
	char cResult[5] = {};


	cin >> input;

	for (int i = 0; i < 15; i++)
	{
		if (i % 5 == 0)
		{
			if (count == 0)
			{
				for (int j = 0; j < 5; j++)
				{
					aResult[j - (count*5)] = input[j];
					cout << aResult[j - (count * 5)];
				}
				count++;
				cout << endl;
			}

			else if (count == 1)
			{
				for (int j = 5; j < 10; j++)
				{
					bResult[j - (count*5)] = input[j];
					cout << bResult[j - (count * 5)];
				}
				count++;
				cout << endl;
			}

			else if (count == 2)
			{
				for (int j = 10; j < 15; j++)
				{
					cResult[j - (count * 5)] = input[j];
					cout << cResult[j - (count * 5)];
				}
			}

		}
	}


	return 0;
}