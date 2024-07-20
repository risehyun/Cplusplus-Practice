#include <iostream>

using namespace std;

int bucket[10] = {};

int main()
{
	int arr[4][3] = 
	{
		{ 3, 5, 1 },
		{ 3, 1, 2 },
		{ 3, 4, 6 },
		{ 5, 4, 6 }
	};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			bucket[arr[y][x]]++;
		}
	}

	for (int index = 0; index < 10; index++)
	{
		if (bucket[index] != 0)
		{
			cout << index;

			int length = bucket[index];

			for (int i = 0; i < length; i++)
			{
				cout << "*";
			}		

			cout << endl;
		}
		
	}

	return 0;
}