#include <iostream>

using namespace std;

int Compare(int* a, int* b, int* result)
{

	int aIndex = 0;
	int bIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		if (a[aIndex] < b[bIndex])
		{
			result[i] = a[aIndex];
			aIndex++;
		}
		else if (a[aIndex] > b[bIndex])
		{
			result[i] = b[bIndex];
			bIndex++;
		}
		else
		{
			result[i] = a[aIndex];
			aIndex++;
		}
	}

	for (int i = 1; i < 4; i++)
	{
		result[aIndex + i] = b[bIndex];
		bIndex++;
	}

	for (int i = (bIndex + aIndex); i < 8; i++)
	{
		result[i] = a[aIndex];
		aIndex++;
	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}


int main()
{
	int a[4] = {};
	int b[4] = {};
	int result[8] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> b[i];
	}

	Compare(a, b, result);

	return 0;
}