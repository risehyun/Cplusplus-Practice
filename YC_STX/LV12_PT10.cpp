#include <iostream>

using namespace std;
int main()
{
	int index = 0;
	char input = ' ';

	cin >> index >> input;

	char arr[5][5] = {};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j >= 0; j--)
		{
			if (i == (index - 1))
			{
				arr[index - 1][j] = input;
				input++;
			}
			else
			{
				arr[i][j] = '0';
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}