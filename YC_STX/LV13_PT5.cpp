#include <iostream>

using namespace std;

int arr[2][6] = {
	{ 4, 5, 6, 1, 3, 1 },
	{ 2, 1, 3, 6, 3, 6 }
};

void Input(int* a, int* b, int* c)
{
	cin >> *a >> *b >> *c;
}

void Process(int* a, int* b, int* c, int* aCount, int* bCount, int* cCount)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == *a)
			{
				(*aCount)++;
			}
			else if (arr[i][j] == *b)
			{
				(*bCount)++;
			}
			if (arr[i][j] == *c)
			{
				(*cCount)++;
			}
		}
	}
}

void Output(int* a, int* b, int* c, int* aCount, int* bCount, int* cCount)
{
	cout << *a << "=" << *aCount << "°³" << endl;
	cout << *b << "=" << *bCount << "°³" << endl;
	cout << *c << "=" << *cCount << "°³" << endl;
}

int main()
{
	int a = 0, b = 0, c = 0;
	int aCount = 0, bCount = 0, cCount = 0;

	Input(&a, &b, &c);
	Process(&a, &b, &c, &aCount, &bCount, &cCount);
	Output(&a, &b, &c, &aCount, &bCount, &cCount);

	return 0;
}