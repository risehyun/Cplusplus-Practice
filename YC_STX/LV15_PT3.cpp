#include <iostream>

using namespace std;

void SelectSort(char arr[2][6])
{
	for (int k = 0; k < 2; k++)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (arr[k][i] > arr[k][j])
				{
					int temp = 0;

					temp = arr[k][i];
					arr[k][i] = arr[k][j];
					arr[k][j] = temp;
				}
			}
		}
	}
}

int main()
{
	char str[2][6] = { };
	char resultStr[11] = "";
	int count[2] = {};

	// 두 문자를 입력받기
	for (int i = 0; i < 2; i++)
	{
		cin >> str[i];
	}

	// 각 문장의 글자 수 도출하기
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (str[y][x] == '\0')
			{
				count[y]++;
			}
		}
	}

	// 각 문장을 정렬하기
	SelectSort(str);

	// 정렬한 문장을 한 문장으로 합치기
	for (int i = 0; i < count[0]; i++)
	{
		resultStr[i] = str[0][i];
	}

	for (int i = count[0] + 1; i < count[0] + count[1]; i++)
	{
		resultStr[i] = str[1][i];
	}

	// 완성된 문장을 출력하기
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			cout << str[y][x];
		}
	}

	return 0;
}