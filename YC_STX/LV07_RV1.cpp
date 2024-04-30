#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << input;
		}

		cout << endl;
	}


	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			cout << input;
		}

		cout << endl;
	}

	return 0;
}