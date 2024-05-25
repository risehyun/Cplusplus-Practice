#include <iostream>

using namespace std;

int isExit(char* arr, char* input)
{
	int count = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[j] == input[i])
			{
				count++;
			}
		}
	}

	return count;
}



int main()
{
	char vect[6] = { 'B', 'T', 'K', 'I', 'G', 'Z' };
	char target[4] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> target[i];
	}

	int result = isExit(vect, target);

	cout << result;

	return 0;
}