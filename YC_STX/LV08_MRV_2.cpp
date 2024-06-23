#include <iostream>

using namespace std;

class Point
{
public:
	int x;
	int y;
};

int map[3][4] =
{


};

int main()
{
	Point location[3] = {};

	for (int i = 0; i < 3; i++)
	{
		cin >> location[i].x >> location[i].y;
	}

	for (int z = 0; z < 3; z++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if (y == location[z].y && x == location[z].x)
				{
					map[y][x] = 1;
				}
			}
		}
	}


	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << endl;
	}



	//for (int i = 0; i < 3; i++)
	//{
	//	cout << location[i].x << "," << location[i].y << endl;
	//}



	return 0;
}