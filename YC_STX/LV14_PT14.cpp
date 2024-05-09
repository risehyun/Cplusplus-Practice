#include <iostream>

using namespace std;
int main()
{

	char arr[2][8] =
	{
		"",
		""
	};

	int count = 0;

	for (int y = 0; y < 2; y++)
	{
		cin >> arr[y];
	}

	for (int x = 0; x < 8; x++)
	{
		if (arr[0][x] != arr[1][x])
		{
			count++;
		}
	}

	cout << count;

	return 0;
}