#include <iostream>

using namespace std;

int Length(char* str)
{

	for (int i = 0; i < 11; i++)
	{
		if (str[i] == '\0')
		{
			return i;
		}
	}
}

int Compare(char* a, char* b)
{
	int aLength = Length(a);
	int bLength = Length(b);

	if (aLength != bLength)
	{
		return 0;
	}

	for (int i = 0; i < aLength; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	
	return 1;

}

int main()
{
	char str[11] = "";

	char aBucket[11] = "";
	char bBucket[11] = "";

	cin >> str;

	int length = Length(str);

	int standard = length / 2;

	for (int i = 0; i < standard; i++)
	{
		aBucket[i] = str[i];
	}

	for (int i = 0; i <= length - standard; i++)
	{
		bBucket[i] = str[standard+i];
	}

	int result = Compare(aBucket, bBucket);

	if (result == 1)
	{
		cout << "동일한문장";
	}
	else
	{
		cout << "다른문장";
	}

	return 0;
}