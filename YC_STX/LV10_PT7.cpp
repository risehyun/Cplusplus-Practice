#include <iostream>

using namespace std;
int main()
{
	int arr[3][4] = {};
	int input = 0;
	int num = 12;

	// 값 채우기
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num;
			num--;
		}
	}

	// 숫자 1개 입력받기
	cin >> input;

	// 입력받은 숫자에 해당하는 열에 값을 0으로 채우기
	for (int y = 0; y < 3; y++)
	{
		arr[y][input] = 0;
	}

	// 결과 출력
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