#include <iostream>

using namespace std;
int main()
{
	char arr[2] = { ' ' };

	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}

	int result = (int)arr[1] - (int)arr[0];

	cout << result;

	return 0;
}