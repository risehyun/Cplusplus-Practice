#include <iostream>

using namespace std;
int main()
{
	char str[2][7] = {};
	int count[2] = {};

	// 1. 두 문장을 입력받는다.
	for (int i = 0; i < 2; i++)
	{
		cin >> str[i];
	}

	// 2. 두 문장이 완전히 같은지 비교한다.
	for (int i = 0; i < 2; i++)
	{
		// 2-1. 각 문장의 길이를 비교한다.
		for (int j = 0; j < 7; j++)
		{
			if (str[i][j] == '\0')
			{
				count[i] = j;
				break;
			}
		}
	}

	if (count[0] != count[1])
	{
		cout << "다름";
	}
	else 
	{
		// 2-2. 각 문장끼리 서로 다른 글자가 있는지 검사한다.
        // if (str[0] != str[1]) => 이건 각 주소를 비교하는 것이기 때문에 유효하지 X
		// 따라서 배열을 한 글자씩 순회하면서 비교해야 한다.
		
		int flag = 0;

		for (int i = 0; i < count[0]; i++)
		{
			if (str[0][i] != str[1][i])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
		{
			cout << "다름";
		}
		else
		{
			cout << "같음";
		}
	}

	return 0;
}