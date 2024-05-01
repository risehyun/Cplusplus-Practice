#include <iostream>

using namespace std;
int main()
{
	int A[5] = { 2, 1, 2, 4, 5 };
	int B[3][3] = {
		{ 2, 5, 3 },
		{ 4, 5, 7 },
		{ 8, 7, 2 }
	};

	int flag = 0, count = 0;


	cin >> flag;

	for (int i = 0; i < 5; i++)
	{
		if (flag == A[i])
		{
			count++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (flag == B[i][j])
			{
				count++;
			}
		}
	}

	cout << count;

	return 0;
}