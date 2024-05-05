#include <iostream>

using namespace std;


char arr[3][3] = {
	{ 'a', 'b', 'd' },
	{ 'e', 'w', 'z' },
	{ 'q', 'v', 'a' }
};

void Process(char input);

void Input()
{
	char input = ' ';

	cin >> input;

	if (input >= 'a' && input <= 'z')
	{
		input -= ' ';
	}

	Process(input);
}

void Process(char input)
{
	char result = input += ' ';

	int flag = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == result)
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
	Input();

	return 0;
}