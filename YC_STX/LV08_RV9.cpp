#include <iostream>

using namespace std;
int main()
{
	char flag1 = ' ', flag2 = ' ';

	char arr[3][6] = {};

	cin >> flag1 >> flag2;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (j > 3)
			{
				arr[i][j] = flag2;
			}
			else
			{
				arr[i][j] = flag1;
			}

			cout << arr[i][j];
		}

		cout << endl;
	}

	return 0;
}