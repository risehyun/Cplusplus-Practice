#include <iostream>

using namespace std;

int isPattern(int* apt, int* pattern)
{
	for (int x = 0; x < 3; x++)
	{
		if (apt[x] != pattern[x])
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int apt[5][3] =
	{
		{ 15, 18, 17 },
		{ 4, 6, 9 },
		{ 10, 1, 3 },
		{ 7, 8, 9 },
		{ 15, 2, 6 }
	};

	int family[3] = {};

	int result = 0;

	// �迭�� ���� �Է¹ޱ�
	for (int i = 0; i < 3; i++)
	{
		cin >> family[i];
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			// ���ϰ� �´��� Ȯ���ϱ� ���� ù��° ���������� 0���� ���
			if (apt[y][x] == family[0])
			{
				result = isPattern(apt[y], family);

				if (result == 1)
				{
					cout << 5 - y << "��";
					break;
				}
			}
		}

	}

	return 0;
}