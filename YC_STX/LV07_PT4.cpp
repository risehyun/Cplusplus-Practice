#include <iostream>

using namespace std;
int main()
{
	int arr[5] = { 0 };
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		if (arr[i] >= 3 && arr[i] <= 7)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}