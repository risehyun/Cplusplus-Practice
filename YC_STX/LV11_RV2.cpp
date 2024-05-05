#include <iostream>

using namespace std;

int arr[3][3] = {
	{ 1, 1, 1 },
	{ 1, 2, 1 },
	{ 3, 6, 3 }
};

int Count(int input)
{
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == input)
			{
				count++;
			}
		}
	}

	return count;
}

int main()
{
	int input = 0, result = 0;

	cin >> input;

	result = Count(input);

	cout << result;

	return 0;
}