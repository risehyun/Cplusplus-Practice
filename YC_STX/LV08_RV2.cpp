#include <iostream>

using namespace std;
int main()
{
	char arr[6] = { 'D', 'T', 'A', 'B', 'W', 'Q' };
	char input = ' ';

	cin >> input;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == input)
		{
			cout << i << "¹ø INDEX";
		}
	}

	return 0;
}