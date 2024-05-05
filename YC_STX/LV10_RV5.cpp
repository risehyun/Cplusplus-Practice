#include <iostream>

using namespace std;
int main()
{
	int arr[6][3] = {};

	int num = 10;

	int a = 0, b = 0;

	// 배열 채우기
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			arr[y][x] = num;
			num++;
		}
	}

	// 숫자 두개 입력받기
	cin >> a >> b;

	// 입력받은 숫자 범위 안에 배열 요소를 7로 변경하기
	for (int i = a; i <= b; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 7;
		}
	}

	// 모든 배열 요소 출력
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;

	}


	return 0;
}