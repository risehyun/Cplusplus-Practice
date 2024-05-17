#include <iostream>

using namespace std;

void isExist(char str[3][11])
{
	int flag = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 11; x++)
		{
			if (str[y][x] == 'M')
			{
				flag = 1;
				cout << "M이 존재합니다";
				break;
			}
		}
	}

	if (flag == 0)
	{
		cout << "M이 존재하지 않습니다";
	}
}

int main()
{
	char str[3][11] = {};

	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}


	isExist(str);




	return 0;
}