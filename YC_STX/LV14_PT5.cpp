#include <iostream>

using namespace std;
int main()
{
	char str[7] = "";

	cin >> str;

	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 7; j++)
		{
			if (str[i] > str[j])
			{
				int temp = 0;
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	for (int i = 0; i < 7; i++)
	{
		cout << str[i];
	}

	return 0;
}