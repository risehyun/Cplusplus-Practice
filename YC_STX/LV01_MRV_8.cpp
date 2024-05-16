#include <iostream>

using namespace std;

void isExist(char str[2][6], char input[2])
{

	int flag[2] = {};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (str[i][j] == input[i])
			{
				flag[i] = 1;
			}

		}
	}

	for (int i = 0; i < 2; i++)
	{
		if (flag[i] == 1)
		{
			cout << input[i] << " : 존재" << endl;
		}
		else
		{
			cout << input[i] << " : 없음" << endl;
		}

	}

}

int main()
{
	char str[2][6] = {
		{ 'A', '7', '9', 'T', 'K', 'Q' },
		{ 'M', 'I', 'N', 'C', 'O', 'D' }
	};

	char input[2] = {};

	for (int i = 0; i < 2; i++)
	{
		cin >> input[i];
	}

	isExist(str, input);


	return 0;
}