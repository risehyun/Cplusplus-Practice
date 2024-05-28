#include <iostream>

using namespace std;
int main()
{
	// 입력받을 int 배열
	int input[3][3] = {};

	// 카운팅을 위한 인덱스 배열
	int bucket[10] = {};

	// 입력을 받음
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> input[y][x];
		}
	}

	// 입력받은 값을 인덱스 배열에 갯수만큼 표시함
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			bucket[input[y][x]]++;
		}
	}

	// 할당값이 0인 경우 존재하지 않는 인덱스라는 뜻이므로 해당 인덱스를 출력하여 완료함
	for (int i = 1; i <= 9; i++)
	{
		if (bucket[i] == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}