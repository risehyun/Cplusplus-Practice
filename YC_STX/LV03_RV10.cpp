#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	int index = input * 2;

	for (int i = 1; i <= index; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << " ";
		}
	}

	return 0;
}