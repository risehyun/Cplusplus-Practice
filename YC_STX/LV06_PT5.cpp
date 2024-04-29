#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	char arr[4] = { 'B', 'T', 'K', 'A' };

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[j] << " ";
		}

		cout << endl;
	}

	return 0;
}