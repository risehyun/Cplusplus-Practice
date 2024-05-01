#include <iostream>

using namespace std;

void Swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int arr[6][2] = {};
	int count = 0;

	// 학생들의 상태 입력 받기
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	// 짝꿍끼리 숫자를 비교해서 숫자가 더 큰 사람이 왼쪽에 앉기
	// 1. 규칙에 맞춰 SWAP

	for (int i = 0; i < 6; i++)
	{
		if (arr[i][0] < arr[i][1])
		{
			Swap(arr[i][0], arr[i][1]);
			count++;
		}
	}

	// 2. 자리를 교체한 사람이 총 몇명인지 출력
	cout << "자리를 교체한 사람 : " << count << "명";

	return 0;
}