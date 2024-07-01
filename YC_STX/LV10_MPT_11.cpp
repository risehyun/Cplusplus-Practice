#include <iostream>

/*
https://oozoowos.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-2%EC%B0%A8%EC%9B%90-%EB%B0%B0%EC%97%B4-%EC%8B%9C%EA%B3%84-%EB%B0%A9%ED%96%A5-%ED%9A%8C%EC%A0%84-180%EB%8F%84-%ED%9A%8C%EC%A0%84-%EC%A0%84%EC%B9%98-%ED%96%89%EB%A0%AC-%EA%B5%AC%ED%95%98%EA%B8%B0
*/
using namespace std;
int main()
{
	int cube[3][3] = 
	{
		{ 0, 5, 4 },
		{ 3, 0, 0 },
		{ 0, 0, 1 }
	};

	int result[3][3] = {};

	int turnCount = 0;

	cin >> turnCount;


	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			// 90도 회전
			if (turnCount == 1)
			{
				result[x][3 - 1 - y] = cube[y][x];
			}

			// 180도 회전
			else if (turnCount == 2)
			{
				result[3 - 1 - y][3 - 1 - x] = cube[y][x];
			}

			else if (turnCount == 3)
			{
				result[3 - 1 - x][y] = cube[y][x];
			}

		}
	}

	// 최종 결과 출력
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (result[y][x] != 0)
			{
				cout << result[y][x];
			}
			else
			{
				cout << '_';
			}

		}

		cout << endl;
	}

	return 0;
}