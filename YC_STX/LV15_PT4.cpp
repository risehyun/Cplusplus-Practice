#include <iostream>

using namespace std;
int main()
{
	char str[2][7] = {};
	int count[2] = {};

	// 1. �� ������ �Է¹޴´�.
	for (int i = 0; i < 2; i++)
	{
		cin >> str[i];
	}

	// 2. �� ������ ������ ������ ���Ѵ�.
	for (int i = 0; i < 2; i++)
	{
		// 2-1. �� ������ ���̸� ���Ѵ�.
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
		cout << "�ٸ�";
	}
	else 
	{
		// 2-2. �� ���峢�� ���� �ٸ� ���ڰ� �ִ��� �˻��Ѵ�.
        // if (str[0] != str[1]) => �̰� �� �ּҸ� ���ϴ� ���̱� ������ ��ȿ���� X
		// ���� �迭�� �� ���ھ� ��ȸ�ϸ鼭 ���ؾ� �Ѵ�.
		
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
			cout << "�ٸ�";
		}
		else
		{
			cout << "����";
		}
	}

	return 0;
}