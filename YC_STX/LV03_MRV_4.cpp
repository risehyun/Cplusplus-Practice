#include <iostream>

using namespace std;
int main()
{
	int up[5] = {};
	int down[5] = {};
	int result[5] = {};

	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> up[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cin >> down[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (up[i] && down[i])
		{
			result[i] = 1;
			count++;
		}
	}

	cout << count << "°³";

	return 0;
}