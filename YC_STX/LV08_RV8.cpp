#include <iostream>

using namespace std;
int main()
{
	int arr[6][3] = {};

	int flag1 = 0, flag2 = 0;

	cin >> flag1 >> flag2;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i > 2)
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