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
			// ���� �ϳ��� ��ġ���� ������ 0(false)�� ����
			return 0;
		}
	}

	// ������� �����Դٸ� ���� ��� ��ġ�Ѵٴ� ���̹Ƿ� ������ �ε����� �Ҵ��ϰ� 
	*endIndex = startIndex + 2;

	// 1 (true) ���� �� �Լ� ����
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

			// ���ϰ��� 1 (true)��� ���̻� �˻��� �ʿ䰡 �����Ƿ� break�� ����� �ݺ����� ��������
			if (result == 1)
			{
				break;
			}
		}
	}

	cout << startIndex << "�� ~ " << endIndex << "�� ĭ";

	return 0;
}