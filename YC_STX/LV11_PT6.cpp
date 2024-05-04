#include <iostream>

using namespace std;
int main()
{
	int arr[7] = { 3, 4, 1, 3, 2, 7, 3 };

	int flag = 0;

	cin >> flag;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == flag)
		{
			flag = 1;
		}
	}

	if (flag != 0)
	{
		cout << "발견";
	}
	else
	{
		cout << "미발견";
	}

	return 0;
}