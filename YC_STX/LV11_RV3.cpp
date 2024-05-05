#include <iostream>

using namespace std;
int main()
{
	char arr[8] = {
		'A', '1', '1', '1', '5', 'A', 'w', 'z'
	};

	char input = ' ';
	int count = 0;

	cin >> input;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == input)
		{
			count++;
		}
	}

	if (count >= 3)
	{
		cout << "THREE";
	}
	else if (count == 2)
	{
		cout << "TWO";
	}
	else if (count == 1)
	{
		cout << "ONE";
	}
	else
	{
		cout << "NOTHING";
	}

	return 0;
}