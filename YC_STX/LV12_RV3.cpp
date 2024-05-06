#include <iostream>

using namespace std;

char arr[4][3] = {
	{ 'D', 'A', 'D' },
	{ 'Q', 'W', 'Q' },
	{ 'A', 'S', 'D' },
	{ 'A', 'S', 'D' }
};

void find(char input)
{
	int flag = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (input == arr[i][j])
			{
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		cout << "존재";
	}
	else
	{
		cout << "없음";
	}
}

int main()
{

	char input = ' ';

	cin >> input;
	
	find(input);


	return 0;
}