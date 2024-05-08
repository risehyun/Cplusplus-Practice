#include <iostream>

using namespace std;
int main()
{
	int input = 0, index = 0, count = 0;

	cin >> input;

	while (index < 3)
	{
		count = 0;
		while (count < 5)
		{
			cout << input;
			count++;
		}

		cout << endl;

		index++;
	}

	return 0;
}