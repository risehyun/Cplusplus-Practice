#include <iostream>

using namespace std;

char a = ' ', b = ' ';

int findCharCount(char str[4][4])
{
	int count = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (str[y][x] == a || str[y][x] == b)
			{
				count++;
			}
		}
	}

	return count;

}


int main()
{
	char arr[4][4] = 
	{
		{ 'A', 'B', 'K', 'T' },
		{ 'K', 'F', 'C', 'F' },
		{ 'B', 'B', 'Q', 'Q' },
		{ 'T', 'P', 'Z', 'F' }
	};



	cin >> a >> b;

	int result = findCharCount(arr);

	cout << result;

	return 0;
}