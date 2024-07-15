#include <iostream>

using namespace std;

char map[4][4] =
{
	{ '_', '_', '_', '_' },
	{ '_', '_', '_', '_' },
	{ '_', '_', '_', '_' },
	{ '_', '_', '_', '_' }
};

int direct[8][2] =
{
	{ -1, 0 }, // ��
	{ 1, 0 }, // ��
	{ 0, -1 }, // ��
	{ 0, 1 },  // ��

	{ -1, -1 }, // �������
	{ -1, 1 }, // �������
	{ 1, -1 }, // �����ϴ�
	{ 1, 1 } // �����ϴ�
};

void MakeWall(int _y, int _x)
{
	for (int y = 0; y < 8; y++)
	{
		int newY = _y + direct[y][0];
		int newX = _x + direct[y][1];

		if ((newY >= 0 && newY < 4) && (newX >= 0 && newX < 4))
		{
			map[newY][newX] = '@';
		}
	}
}

int main()
{
	int x = 0, y = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> y >> x;

		map[y][x] = '#';	

		MakeWall(y, x);
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x];
		}
		cout << endl;
	}

	return 0;
}