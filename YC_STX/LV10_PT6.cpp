#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] = {};
	int temp[4][4] = {};

	int num = 1;

	// 배열을 숫자 순서대로 쭉 채워준다.
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num;
			num++;
		}
	}

	// 회전 규칙을 적용해 뒤집은 값을 임시 배열에 넣는다.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[j][4-i-1] = arr[i][j];
		}
	}

	// 기존 배열에 임시 배열을 삽입해주며 하나씩 출력한다.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = temp[i][j];
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}