#include <iostream>

using namespace std;
int main()
{
	int map[5][5] =
	{  // A  B  C  D  E
		{ 0, 1, 7, 2, 0 },
		{ 0, 0, 8, 0, 5 },
		{ 0, 0, 0, 3, 6 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 }
	};

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (map[y][x] != 0)
			{
				switch (y)
				{
				case 0 :
					cout << "A ";
					break;

				case 1 :
					cout << "B ";
					break;

				case 2:
					cout << "C ";
					break;

				case 3:
					cout << "D ";
					break;

				case 4:
					cout << "E ";
					break;

				}
				
				switch (x)
				{
				case 0:
					cout << "A ";
					break;

				case 1:
					cout << "B ";
					break;

				case 2:
					cout << "C ";
					break;

				case 3:
					cout << "D ";
					break;

				case 4:
					cout << "E ";
					break;

				}

				cout << map[y][x] << endl;
			}
		}
	}


	return 0;
}