#include <iostream>

using namespace std;

int arr[7][5] = {
	{ 1, 0, 0, 0, 0 },
	{ 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 1, 0 },
	{ 1, 0, 1, 0, 0 },
	{ 0, 1, 0, 0, 1 },
	{ 0, 0, 0, 1, 0 },
	{ 1, 1, 0, 0, 0 }
};

int INPUT()
{
	int input = 0;
	cin >> input;
	return input;
}

int PROCESS(int input)
{
	int count = 0;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i][input] == 1)
		{
			count++;
		}
	}

	return count;
}

void OUTPUT(int count)
{
	cout << count;
}

int main()
{
	int input = INPUT();
	int count = PROCESS(input);
	OUTPUT(count);

	return 0;
}