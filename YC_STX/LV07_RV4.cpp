#include <iostream>

using namespace std;
int main()
{
	char arr[3][5] = {
		{},
		{},
		{},
	};

	char input = ' ';

	cin >> input;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = input;

			input++;
		}
	}

	cout << (char)(arr[2][2] + ' ');

	return 0;
}