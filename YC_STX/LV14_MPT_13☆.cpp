/*
	함수화해서 깔끔하게 처리하기
*/

#include <iostream>

using namespace std;

int A[3][3] =
{
	{ 2, 6, 3 },
	{ 7, 1, 1 },
	{ 3, 4, 2 }
};

int B[2][4] =
{
	{ 6, 4, 2, 4 },
	{ 1, 1, 5, 8 }
};

int C[2][3] =
{
	{ 9, 2, 3 },
	{ 4, 2, 1 }
};

int result[3][3] = {};

int main()
{

	int aIndex = 0;
	int bIndex = 0;
	int cMaxIndex = 0;
	int cMinIndex = 0;

#pragma region A

	while (aIndex != 3)
	{
		int max = -1;

		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (A[y][x] > max)
				{
					max = A[y][x];			
				}
			}
		}

		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (A[y][x] == max)
				{
					A[y][x] = 0;
				}
			}
		}
		
		result[0][aIndex] = max;
		aIndex++;
	}
		
#pragma endregion

#pragma region B
	while (bIndex != 3)
	{
		int min = 10;

		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if (B[y][x] > 0 && B[y][x] < min)
				{
					min = B[y][x];
				}
			}
		}

		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if ((B[y][x] == min) && (B[y][x] != 0))
				{
					B[y][x] = 0;
					break;
				}
			}
		}

		result[1][bIndex] = min;
		bIndex++;
	}
#pragma endregion

#pragma region C

	while (cMinIndex != 2)
	{
		int min = 10;

		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (C[y][x] > 0 && C[y][x] < min)
				{
					min = C[y][x];
				}
			}
		}

		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if ((C[y][x] == min) && (C[y][x] != 0))
				{
					C[y][x] = 0;
					break;
				}
			}
		}

		result[2][cMinIndex] = min;
		cMinIndex++;
	}


	while (cMaxIndex != 1)
	{
		int max = -1;

		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (C[y][x] > max)
				{
					max = C[y][x];
				}
			}
		}

		result[2][2] = max;
		cMaxIndex++;
	}
#pragma endregion

	// 최종 결과 출력
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << result[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}