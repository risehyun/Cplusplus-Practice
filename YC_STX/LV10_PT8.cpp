#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] = {};

	// 2차원 배열에 숫자 입력받기
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	// 2중 for문을 돌려서 배열 안의 숫자가 짝수일 때, 홀수일 때, 0일 때 각각 값 출력하기
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << "!";
			}
			else if (arr[i][j] % 2 == 0)
			{
				cout << "#";
			}
			else if (arr[i][j] % 2 == 1)
			{
				cout << "@";
			}
		}

		cout << endl;

	}

	return 0;
}