#include <iostream>

using namespace std;
int main()
{
	int arr[7] = {};
	int max = 0, min = 10000;

	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];

		if (arr[i] >= max)
		{
			max = arr[i];
		}
		else if (arr[i] <= min)
		{
			min = arr[i];
		}
	}

	cout << "MAX = " << max << endl;
	cout << "MIN = " << min;

	return 0;
}