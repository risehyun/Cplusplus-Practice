#include <iostream>

using namespace std;
int main()
{
	char str[11] = "";
	int flag = 1;

	cin >> str;

	for (int i = 0; i < 11; i++)
	{
		// Ȧ�����
		if (i % 2 == 1)
		{
			// �ҹ�����ġ üũ (�ҹ����� ��� ��Ģ�� ����)
			if(str[i] > 'a' && str[i] < 'z')
			{
				cout << "����������";
				flag = 0;
				break;
			}
		}

		// ¦�����
		else if (i % 2 == 0)
		{
			// �빮������ üũ (�빮���� ��� ��Ģ�� ����)
			if (str[i] > 'A' && str[i] < 'Z')
			{
				cout << "����������";
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
	{
		cout << "�Ϲݹ���";
	}

	return 0;
}