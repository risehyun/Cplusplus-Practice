#include <iostream>

using namespace std;

void FindABC(char* str1, char* str2, int* aCount, int* bCount, int* cCount)
{
	for (int i = 0; i < 100; i++)
	{
		if (str1[i] == '\0')
		{
			break;
		}

		if (str1[i] == 'A')
		{
			(*aCount)++;
		}
		else if (str1[i] == 'B')
		{
			(*bCount)++;
		}
		else if (str1[i] == 'C')
		{
			(*cCount)++;
		}
	}

	for (int i = 0; i < 100; i++)
	{

		if (str2[i] == '\0')
		{
			break;
		}

		if (str2[i] == 'A')
		{
			(*aCount)++;
		}
		else if (str2[i] == 'B')
		{
			(*bCount)++;
		}
		else if (str2[i] == 'C')
		{
			(*cCount)++;
		}
	}
}

int main()
{
	char str1[100] = "";
	char str2[100] = "";

	int aCount = 0, bCount = 0, cCount = 0;

	cin >> str1 >> str2;

	FindABC(str1, str2, &aCount, &bCount, &cCount);

	cout << "A:" << aCount << endl;
	cout << "B:" << bCount << endl;
	cout << "C:" << cCount << endl;

	return 0;
}