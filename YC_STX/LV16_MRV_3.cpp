#include <iostream>

using namespace std;
int main()
{
	int a[6] = {};
	int b[6] = {};
	int sum[6] = {};

	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < 6; i++)
	{
		sum[i] = (a[i] + b[i]);
	}

	for (int i = 0; i < 6; i++)
	{
		if (sum[i] > 9 && i > 0)
		{
			int result = sum[i] - 10;
			sum[i] = result;
			sum[i - 1] += 1;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << sum[i] << " ";
	}

	return 0;
}