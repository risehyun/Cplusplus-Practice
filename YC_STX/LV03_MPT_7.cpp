#include <iostream>

using namespace std;

int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };
int team[3] = {};

int isPattern(int startIndex, int* endIndex)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (team[i] != train[startIndex + i])
		{
			// 값이 하나라도 일치하지 않으면 0(false)을 리턴
			return 0;
		}
	}

	// 여기까지 내려왔다면 값이 모두 일치한다는 뜻이므로 마지막 인덱스를 할당하고 
	*endIndex = startIndex + 2;

	// 1 (true) 리턴 후 함수 종료
	return 1;
}

int main()
{
	int startIndex = 0;
	int endIndex = 0;
	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> team[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (train[i] == team[0])
		{
			startIndex = i;

			result = isPattern(startIndex, &endIndex);

			// 리턴값이 1 (true)라면 더이상 검사할 필요가 없으므로 break를 사용해 반복문을 빠져나감
			if (result == 1)
			{
				break;
			}
		}
	}

	cout << startIndex << "번 ~ " << endIndex << "번 칸";

	return 0;
}