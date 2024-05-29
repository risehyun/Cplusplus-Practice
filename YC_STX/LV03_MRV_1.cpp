#include <iostream>

using namespace std;

int FindChar(char* bucket, char arr[2][3])
{

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			bucket[arr[y][x]]++;
		}
	}

	for (int i = 0; i < 256; i++)
	{
		if (bucket[i] >= 3)
		{
			return 1;
		}
	}


	return 0;

}

int main()
{
	char bucket[256] = {};

	char arr[2][3] =
	{
		{ 'G', 'K', 'G' },
		{}
	};

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[1][i];
	}

	int result = FindChar(bucket, arr);

	if (result == 1)
	{
		cout << "있음";
	}
	else
	{
		cout << "없음";
	}


	return 0;
}