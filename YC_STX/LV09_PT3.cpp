#include <iostream>

using namespace std;
int main()
{
	char arr[6] = { 'A', 'F', 'G', 'A', 'B', 'C' };

	char flag1 = ' ', flag2 = ' ';

	int count1 = 0, count2 = 0;

	cin >> flag1 >> flag2;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == flag1)
		{
			count1++;
		}

		else if (arr[i] == flag2)
		{
			count2++;
		}
	}

	if (count1 > 0 && count2 > 0)
	{
		cout << "와2개";
	}
	else if (count1 > 0 && count2 == 0 || count1 == 0 && count2 > 0)
	{
		cout << "오1개";
	}
	else
	{
		cout << "우0개";
	}

	return 0;
}