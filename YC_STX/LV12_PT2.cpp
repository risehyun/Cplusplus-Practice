#include <iostream>

using namespace std;
int main()
{
	char arr1[5] = "";
	char arr2[5] = "";

	cin >> arr1 >> arr2;

	int length = 0;

	for (int i = 0; i < 5; i++)
	{
		if(arr1[i] == '\0')
		{
			length = i;
			break;
		}
	}

	cout << length << " ";

	for (int i = 0; i < 5; i++)
	{
		if (arr2[i] == '\0')
		{
			length = i;
			break;
		}
	}

	cout << length;

	return 0;
}