#include <iostream>

using namespace std;

char arr[3][3] = {
	{ 'A', 'D', 'F' },
	{ 'Q', 'W', 'E' },
	{ 'Z', 'X', 'C' }
};

void Find(char input, int* y, int* x)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == input)
			{
				*y = i;
				*x = j;
			}
		}
	}
}

int main()
{
	char input = 0;

	int y = 0, x = 0;

	cin >> input;

	Find(input, &y, &x);

	cout << y << "," << x;

	return 0;
}