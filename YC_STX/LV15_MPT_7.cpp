#include <iostream>

using namespace std;

int arr[3][4] =
{
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 1, 0, 0, 0 }
};

int direct[2][2] =
{
	{ -1, 0 },	// 상
	{ 0 , -1 }	// 좌
};

int main()
{
	// 맨 윗줄 입력받기
	for (int x = 0; x < 4; x++)
	{
		cin >> arr[0][x];
	}

	// 범위 내의 숫자들을 direct를 활용해 계산하기
	for (int y = 1; y < 3; y++)
	{
		for (int x = 1; x < 4; x++)
		{
			int sum = 0;

			for (int i = 0; i < 2; i++)
			{
				int newY = y + direct[i][0];
				int newX = x + direct[i][1];

				sum += arr[newY][newX];

				arr[y][x] = sum;
			}
		}
	}

	// 전체 결과 출력
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x];
		}
		cout << endl;
	}


	return 0;
}