#include <iostream>

using namespace std;
int main()
{
	char str[2][11] =
	{
		"",
		""
	};

	int length[2] = {};
	int flag = 1;

	// 1. 두 문장을 입력받는다.
	cin >> str[0] >> str[1];

	// 2. 두 문장이 거꾸로 된 문장이 맞는지 확인한다.
	//  2-1. 두 문장의 길이가 서로 같은지 검사
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 11; x++)
		{
			if (str[y][x] == '\0')
			{
				length[y] = x;
				break;
			}
		}
	}

	if (length[0] != length[1])
	{
		cout << "거울문장아님";
	}
	else
	{
		//	2-2. 각 문장끼리 서로 거울문장인지 확인
		int t = length[0] - 1;

		for (int i = 0; i < length[0]; i++)
		{
			if (str[0][i] != str[1][t])
			{
				flag = 0;
				break;
			}
			t--;
		}
	}

	if (flag == 1)
	{
		cout << "거울문장";
	}
	else if (flag == 0)
	{
		cout << "거울문장아님";
	}

	return 0;
}