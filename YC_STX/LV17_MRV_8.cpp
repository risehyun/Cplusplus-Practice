#include <iostream>

using namespace std;

char map[4][3] = {};

void Input()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> map[y][x];
		}
	}
}

void Move()
{
	/*
		�̵��� ��ο� ���̳� �ٸ� ���Ͱ� ������ �������� �ʰ� ���ڸ��� �ӹ���.
	*/


	// 1. ������ �ϰ� ������ �̵�
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{


			if (map[y][x] >= 'A' && map[y][x] <= 'Z')
			{
				if (x < 2 && (map[y][x+1] != '#') 
					&& !(map[y][x+1] >= 'A' && map[y][x+1] <= 'Z'))
				{
					map[y][x+1] = map[y][x];
					map[y][x] = '_';
				}
			}
		}
	}

	// 2. ������ �ϰ� �Ʒ��� �̵�
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			
			if (map[y][x] >= 'A' && map[y][x] <= 'Z')
			{
				if (y < 3 && (map[y + 1][x] != '#')
					&& !(map[y+1][x] >= 'A' && map[y+1][x] <= 'Z'))
				{
					map[y + 1][x] = map[y][x];
					map[y][x] = '_';
				}
			}

			
		}
	}

	// 3. ������ �ϰ� ���� �̵�
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			
			if (map[y][x] >= 'A' && map[y][x] <= 'Z')
			{
				if (x > 0 && (map[y][x - 1] != '#')
					&& !(map[y][x - 1] >= 'A' && map[y][x - 1] <= 'Z'))
				{
					map[y][x - 1] = map[y][x];
					map[y][x] = '_';
				}
			}
		}
	}


	// 4. ������ �ϰ� ���� �̵�
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{

			if (map[y][x] >= 'A' && map[y][x] <= 'Z')
			{
				if (y > 0 && (map[y - 1][x] != '#')
					&& !(map[y - 1][x] >= 'A' && map[y - 1][x] <= 'Z'))
				{
					map[y - 1][x] = map[y][x];
					map[y][x] = '_';
				}
			}
		}
	}

	// 5. ������ �ϰ� ������ �̵�
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{


			if (map[y][x] >= 'A' && map[y][x] <= 'Z')
			{
				if (x < 2 && (map[y][x + 1] != '#')
					&& !(map[y][x + 1] >= 'A' && map[y][x + 1] <= 'Z'))
				{
					map[y][x + 1] = map[y][x];
					map[y][x] = '_';
				}
			}
		}
	}
}

void Print()
{
	cout << "***********" << endl;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << map[y][x];
		}
		cout << endl;
	}
}

int main()
{
	Input();
	Move();
	Print();

	return 0;
}