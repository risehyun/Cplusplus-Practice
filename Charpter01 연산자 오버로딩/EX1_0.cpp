#include<iostream>
#include <queue>

using namespace std;

int main()
{
	int input[3] = { 0 };
	int max = 0;

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> input[i];
		}

		if (input[0] == 0 && input[1] == 0 && input[2] == 0)
		{
			break;
		}

		// 오름차순 정렬
		for (int i = 0; i < 3; i++)
		{
			for (int i = 0; i < 2; i++)
			{
				if (input[i] > input[i + 1])
				{
					int temp = input[i];
					input[i] = input[i + 1];
					input[i + 1] = temp;
				}
			}
		}

		max = input[2];

		int sum = input[0] + input[1];

		if (max >= sum)
		{
			cout << "Invalid" << '\n';
		}
		else if (input[0] != input[1]
			&& input[0] != input[2]
			&& input[1] != input[2])
		{
			cout << "Scalene" << '\n';
		}
		else
		{
			if (input[0] == input[1] && input[1] == input[2])
			{
				cout << "Equilateral" << '\n';
			}
			else
			{
				cout << "Isosceles" << '\n';
			}
		}
	}

	return 0;
}