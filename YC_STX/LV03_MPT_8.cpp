#include <iostream>

using namespace std;

int isPattern(int* apt, int* pattern)
{
	for (int x = 0; x < 3; x++)
	{
		if (apt[x] != pattern[x])
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int apt[5][3] =
	{
		{ 15, 18, 17 },
		{ 4, 6, 9 },
		{ 10, 1, 3 },
		{ 7, 8, 9 },
		{ 15, 2, 6 }
	};

	int family[3] = {};

	int result = 0;

	// 배열에 패턴 입력받기
	for (int i = 0; i < 3; i++)
	{
		cin >> family[i];
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			// 패턴과 맞는지 확인하기 위해 첫번째 진입점으로 0번을 사용
			if (apt[y][x] == family[0])
			{
				result = isPattern(apt[y], family);

				if (result == 1)
				{
					cout << 5 - y << "층";
					break;
				}
			}
		}

	}

	return 0;
}