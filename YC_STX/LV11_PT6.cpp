#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] = {};

	int num = 1;
	// int x = 3;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num;
			num++;
		}



		//arr[y][x] = num;
		//num++;


		//if (num == 5)
		//{
		//	x--;

		//	for (int y = 0; y < 4; y++)
		//	{
		//		arr[y][x] = num;
		//		num++;
		//	}
		//}

		//if (num == 9)
		//{
		//	x--;

		//	for (int y = 0; y < 4; y++)
		//	{
		//		arr[y][x] = num;
		//		num++;
		//	}
		//}


		//if (num == 13)
		//{
		//	x--;

		//	for (int y = 0; y < 4; y++)
		//	{
		//		arr[y][x] = num;
		//		num++;
		//	}
		//}


	}
	

	// Ãâ·Â
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}