#include <iostream>

using namespace std;

int main()
{

	int arr[3][5] = {};

	int sumTemp[5] = {};

	int result[5] = {};

	// 배열 전체 입력받기
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			cin >> arr[y][x];
		}
	}

	int yIndex = 0;

	for (int x = 0; x < 5; x++)
	{
		sumTemp[x] = arr[yIndex][x] * arr[yIndex + 1][x];
	}

	yIndex = 2;

	for (int x = 0; x < 5; x++)
	{
		result[x] = arr[yIndex][x] + sumTemp[x];
		cout << result[x] << " ";
	}

	return 0;
}