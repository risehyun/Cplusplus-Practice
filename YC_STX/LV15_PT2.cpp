#include <iostream>

using namespace std;
int main()
{
	int arr[6] = { 10, 50, 40, 20, 30, 40 };
	int inputArr[6] = {};
	int count[6] = {};

	for (int i = 0; i < 6; i++)
	{
		cin >> inputArr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i] > inputArr[j])
			{
				count[j]++;
			}
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << inputArr[i] << "=" << count[i] << "°³" << endl;
	}

	return 0;
}