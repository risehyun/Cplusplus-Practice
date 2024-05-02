#include <iostream>

using namespace std;
int main()
{
	int arr[3][3] = { 0 };
	int input = 0;

	cin >> input;

	if (input % 5 == 1)
	{
		int flag = 9;

		for (int i = 0; i < 3; i++)
		{
			arr[i][0] = flag;
			arr[i][1] = flag - 3;
			arr[i][2] = flag - 6;
			flag--;
		}
	}
	else if (input % 5 == 2)
	{
		int flag = 7;

		for (int i = 0; i < 3; i++)
		{
			arr[0][i] = flag;
			arr[1][i] = flag - 3;
			arr[2][i] = flag - 6;
			flag++;
		}
	}
	else
	{
		int flag = 10;

		for (int i = 0; i < 3; i++)
		{
			arr[i][0] = flag;
			arr[i][1] = flag + 3;
			arr[i][2] = flag + 6;
			flag++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	
	return 0;
}