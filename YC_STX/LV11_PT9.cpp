#include <iostream>

using namespace std;
int main()
{
	char arr[8] = {};
	char big[8] = {};
	char small[8] = {};

	int indexBig = 0;
	int indexSmall = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];

		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			big[indexBig] = arr[i];
			indexBig++;
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			small[indexSmall] = arr[i];
			indexSmall++;
		}
	}

	cout << "big=";

	for (int i = 0; i < 8; i++)
	{
		cout << big[i];
	}

	cout << endl << "small=";

	for (int i = 0; i < 8; i++)
	{
		cout << small[i];
	}

	return 0;
}