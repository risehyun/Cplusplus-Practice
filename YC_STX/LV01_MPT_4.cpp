#include <iostream>

using namespace std;
int main()
{
	int arr[6] = {};
	int div = 0;

	for (int i = 0; i < 1; i++)
	{
		cin >> arr[i];
	}

//	int temp = 100;

	for (int i = 0; i <= 3; i++)
	{
		for (int j = i + 1; j <= 4; j++)
		{
			//arr[i + 2] = temp;
			//temp++;

			arr[i + 2] = arr[i] + arr[j];
		}
	}

	//div = arr[5];

	//cout << div;

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}