#include <iostream>

using namespace std;

char arr[2][3] = {};
int countUpper = 0, countLower = 0;

void Input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void findUpper()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
			{
				countUpper++;
			}
		}
	}

	cout << "�빮��" << countUpper << "��" << endl;
}

void findLower()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
			{
				countLower++;
			}
		}
	}

	cout << "�빮��" << countLower << "��" << endl;
}


int main()
{
	Input();
	findUpper();
	findLower();

	return 0;
}