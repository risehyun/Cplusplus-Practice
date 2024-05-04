#include <iostream>

using namespace std;

int vect[2][5] = {
	{ 3, 2, 6, 2, 4 },
	{ 1, 4, 2, 6, 5 }
};

int flag = 0;

int KFC(int target)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (vect[i][j] == target)
			{
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int target = 0;
	cin >> target;

	int result = KFC(target);

	if (result == 1)
	{
		cout << "값이 존재합니다";
	}
	else
	{
		cout << "값이 없습니다";
	}

	return 0;
}