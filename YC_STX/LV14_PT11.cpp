#include <iostream>

using namespace std;

void SelectSort(char arr[2][6], int flag)
{
	// È¦¼ö¶ó¸é
	if (flag == 0)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (arr[0][i] > arr[0][j])
				{
					int temp = 0;

					temp = arr[0][i];
					arr[0][i] = arr[0][j];
					arr[0][j] = temp;
				}
			}
		}
	}

	// Â¦¼ö¶ó¸é
	else if (flag == 1)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (arr[1][i] > arr[1][j])
				{
					int temp = 0;

					temp = arr[1][i];
					arr[1][i] = arr[1][j];
					arr[1][j] = temp;
				}
			}
		}
	}
}


int main()
{
	char arr[2][6] =
	{
		"DATAW",
		"BBQK"
	};

	int input = 0, flag = 0;

	cin >> input;

	if (input % 2 == 1)
	{
		flag = 0;
	}
	else if (input % 2 == 0)
	{
		flag = 1;
	}

	SelectSort(arr, flag);

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			cout << arr[y][x];
		}

		cout << endl;

	}

	return 0;
}