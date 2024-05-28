#include <iostream>

using namespace std;
int main()
{
	int bucket[65536] = {};

	int list[3][4] =
	{
		{ 65000, 35, 42, 70 },
		{ 70, 35, 65000, 1300 },
		{ 65000, 30000, 38, 42 }
	};

	int maxCount = 0;
	int maxIndex = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			// 아스키코드 자체를 인덱스로 사용
			// 알파벳 갯수를 확인
			bucket[list[y][x]]++;
		}
	}

	for (size_t x = 0; x < 65536; x++)
	{
		// 알파벳이 존재한다면
		if (bucket[x] != 0) {
			// 사용된 알파벳의 개수를 임시 변수에 저장
			int result = bucket[x];

			// 결과값을 현재의 최대값과 비교해서 가장 빈도 수가 큰 인덱스 도출
			if (result > maxCount)
			{
				maxCount = result;
				maxIndex = x;
			}
		}
	}

	// 결과 출력
	cout << maxIndex << endl;


	return 0;
}