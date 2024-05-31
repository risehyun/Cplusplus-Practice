#include <iostream>

using namespace std;
int main()
{
	char map[4][5] = {};
	int yInput = 0, xInput = 0;

	int direct[8][2] =
	{
		{ -1, -1 }, // ���� ��
		{ -1, 0 },  // ��
		{ -1, 1 },  // ������ ��
		{ 0, -1 },  // ����
		{ 1, -1 },  // ���� �Ʒ�
		{ 1, 0 }, // �Ʒ�
		{ 1, 1 }, // ������ �Ʒ�
		{ 0, 1 }// ������
	};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			map[y][x] = '_';
		}
	}

	for (int i = 0; i < 2; i++)
	{
		cin >> yInput >> xInput;

		for (int i = 0; i < 8; i++)
		{
			int newY = yInput + direct[i][0];
			int newX = xInput + direct[i][1];

			if (newX >= 0 && newX < 5 && newY >= 0 && newY < 4)
			{
				map[newY][newX] = '#';
			}
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			cout << map[y][x];
		}
		cout << endl;
	}


	return 0;
}