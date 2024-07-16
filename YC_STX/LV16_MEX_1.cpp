#include <iostream>

using namespace std;
int main()
{
	char value[7] = { 'D', 'E', 'F', 'Q', 'Z', 'V', 'M' };

	int map[7][7] =
	{
		{ 0, 1, 1, 1, 0, 0, 0 },
		{ 0, 0, 0, 0, 1, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 1, 1 },
		{ 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0 }
	};

	int input = 0;

	cin >> input;

	for (int i = 0; i < 7; i++)
	{
		if (map[input][i] == 1)
		{
			char result = value[i];
			cout << result << endl;
		}
	}

	return 0;
}