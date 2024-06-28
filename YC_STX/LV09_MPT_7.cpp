#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;
};

int main()
{

	Point point[6] = {};

	int flag = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> point[i].y >> point[i].x;
	}

	
	for (int i = 0; i < 6; i++)
	{
		if (i != 0)
		{
			for (int j = 0; j < i; j++)
			{
				if (point[j].y == point[i].y && point[j].x == point[i].x)
				{
					flag = 1;
				}
			}
		}
	}

	if (flag == 1)
	{
		cout << "중복된 좌표 발견";
	}
	else
	{
		cout << "중복없음";
	}


	return 0;
}