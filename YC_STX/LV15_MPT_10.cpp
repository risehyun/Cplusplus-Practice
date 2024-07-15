#include <iostream>

using namespace std;

int arr[4][4] = {};

int charCount[4] = {};

int main()
{
	// 연결 상태 입력받기
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> arr[y][x];

			if (arr[y][x] == 1)
			{
				++charCount[y];
			}
		}
	}

	int max = -1;
	int maxIndex = -1;

	for (int i = 0; i < 4; i++)
	{
		if (max < charCount[i])
		{
			max = charCount[i];
			maxIndex = i;

			cout << max << ", " << maxIndex << endl;

		}
	}

	if (maxIndex == 0)
	{
		cout << 'A';
	}
	else if (maxIndex == 1)
	{
		cout << 'B';
	}
	else if (maxIndex == 2)
	{
		cout << 'C';
	}
	else if (maxIndex == 3)
	{
		cout << 'D';
	}

	return 0;
}