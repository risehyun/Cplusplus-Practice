#include <iostream>

using namespace std;
int main()
{
	char str[11] = "";
	int flag = 1;

	cin >> str;

	for (int i = 0; i < 11; i++)
	{
		// 홀수라면
		if (i % 2 == 1)
		{
			// 소문자인치 체크 (소문자인 경우 규칙에 위배)
			if(str[i] > 'a' && str[i] < 'z')
			{
				cout << "개구리문장";
				flag = 0;
				break;
			}
		}

		// 짝수라면
		else if (i % 2 == 0)
		{
			// 대문자인지 체크 (대문자인 경우 규칙에 위배)
			if (str[i] > 'A' && str[i] < 'Z')
			{
				cout << "개구리문장";
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
	{
		cout << "일반문장";
	}

	return 0;
}