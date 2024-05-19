#include <iostream>

using namespace std;

int isExist(int _input, int _arr[3][3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (_arr[y][x] == _input)
			{
				return 1;
			}
		}
	}

	return 0;
}


int main()
{

	int arr[3][3] = 
	{
		{ 3, 5, 9 },
		{ 4, 2, 1 },
		{ 5, 1, 5 }
	};

	int input[3] = {};

	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];

		result = isExist(input[i], arr);

		if (result == 0)
		{
			cout << input[i] << ": 미발견" << endl;
		}
		else if (result == 1)
		{
			cout << input[i] << ": 존재" << endl;
		}

	}





	return 0;
}