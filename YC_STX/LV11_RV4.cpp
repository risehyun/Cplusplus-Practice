#include <iostream>

using namespace std;
int main()
{
	char arr[3][5] =
	{
		{ 'a', 'b', 'a', 'c', 'z' },
		{ 'c', 't', 'a', 'c', 'd' },
		{ 'c', 'c', 'c', 'c', 'a' }
	};

	char input = ' ';
	int count = 0;

	cin >> input;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == input)
			{
				count++;
			}
		}
	}

	if (count >= 7)
	{
		cout << "����";
	}
	else if (count >= 5)
	{
		cout << "�Ϳ�";
	}
	else if (count >= 3)
	{
		cout << "�̾�";
	}
	else
	{
		cout << "�̷�";
	}

	return 0;
}