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

	// �� ���ڸ� �Է¹ޱ�
	for (int i = 0; i < 2; i++)
	{
		cin >> str[i];
	}

	// �� ������ ���� �� �����ϱ�
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

	// �� ������ �����ϱ�
	SelectSort(str);

	// ������ ������ �� �������� ��ġ��
	for (int i = 0; i < count[0]; i++)
	{
		resultStr[i] = str[0][i];
	}

	for (int i = count[0] + 1; i < count[0] + count[1]; i++)
	{
		resultStr[i] = str[1][i];
	}

	// �ϼ��� ������ ����ϱ�
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			cout << str[y][x];
		}
	}

	return 0;
}