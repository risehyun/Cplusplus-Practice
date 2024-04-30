#include <iostream>

using namespace std;
int main()
{
	char arr[2] = {};
	int input = 0;

	cin >> arr[0] >> arr[1] >> input;


	for (int i = 0; i < input; i++)
	{
		for (char j = arr[0]; j <= arr[1]; j++)
		{
			cout << j;
		}

		cout << endl;
	}


	return 0;
}