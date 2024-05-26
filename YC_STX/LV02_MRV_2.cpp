#include <iostream>

using namespace std;

int isSame(int* password, int* input)
{
	for (int i = 0; i < 4; i++)
	{
		if (password[i] != input[i])
		{
			return 0;
		}
	}

	return 1;
}


int main()
{
	int password[4] = { 3, 7, 4, 9 };

	int input[4] = {};

	int result = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}
	
	result = isSame(password, input);

	if (result == 0)
	{
		cout << "fail";
	}
	else if (result == 1)
	{
		cout << "pass";
	}


	return 0;
}