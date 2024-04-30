#include <iostream>

using namespace std;
int main()
{
	int arr[6] = { };

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];

		if (arr[i] == 7)
		{
			break;
		}
		else
		{
			cout << arr[i] << " ";
		}

	}


	return 0;
}