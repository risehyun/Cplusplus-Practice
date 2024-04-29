#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	char arr[4] = { 'B', 'T', 'K', 'A' };

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
	}

	return 0;
}