#include <iostream>

using namespace std;
int main()
{
	char arr[13] = { 'S', 't', 'r', 'u', 'c', 't', 'P', 'o', 'i', 'n', 't', 'e', 'r' };

	char input = ' ';

	int flag = 0;

	cin >> input;

	for (int i = 0; i < 13; i++)
	{
		if (arr[i] == input)
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