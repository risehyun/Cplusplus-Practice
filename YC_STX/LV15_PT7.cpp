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

	// 1. �� ������ �Է¹޴´�.
	cin >> str[0] >> str[1];

	// 2. �� ������ �Ųٷ� �� ������ �´��� Ȯ���Ѵ�.
	//  2-1. �� ������ ���̰� ���� ������ �˻�
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
		cout << "�ſ﹮��ƴ�";
	}
	else
	{
		//	2-2. �� ���峢�� ���� �ſ﹮������ Ȯ��
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
		cout << "�ſ﹮��";
	}
	else if (flag == 0)
	{
		cout << "�ſ﹮��ƴ�";
	}

	return 0;
}