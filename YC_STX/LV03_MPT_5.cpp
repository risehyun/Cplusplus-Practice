#include <iostream>

using namespace std;
int main()
{
	int count = 0;

	char town[3][3] =
	{
		{ 'C', 'D', 'A' },
		{ 'B', 'M', 'Z' },
		{ 'Q', 'P', 'O' }
	};

	// 입력받기
	char blackList[4] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> blackList[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (town[y][x] == blackList[i])
				{
					count++;
				}
			}
		}
	}

	std::cout << count;

	return 0;
}