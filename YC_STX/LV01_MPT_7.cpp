#include <iostream>

using namespace std;

int isExist(char* str, char* input)
{
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == *input)
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	char str[4] = { 'M', 'T', 'K', 'C' };

	char input = ' ';

	cin >> input;

	int result = isExist(str, &input);

	if (result == 0)
	{
		cout << "미발견";
	}
	else
	{
		cout << "발견";
	}

	return 0;
}