#include <iostream>

using namespace std;

int stringLen(char* str)
{
	int length = 0;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			length = i;
			break;
		}
	}

	return length;
}

int main()
{
	char arr[100] = "";

	cin >> arr;

	int result = stringLen(arr);

	cout << result << "±ÛÀÚ";
		
	return 0;
}