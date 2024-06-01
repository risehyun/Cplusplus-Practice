#include <iostream>

using namespace std;

void BBQ(int* a, int* b)
{
	int input[5] = {};

	int max = 0, min = 10;

	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];

		if (max < input[i])
		{
			max = input[i];
		}

		if (min > input[i])
		{
			min = input[i];
		}
	}

	*a = max;
	*b = min;
}

int main()
{
	int a = 0, b = 0;

	BBQ(&a, &b);
	
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}