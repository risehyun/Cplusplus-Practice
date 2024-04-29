#include <iostream>

using namespace std;
int main()
{
	char input[2] = { ' ' };

	for (int i = 0; i < 2; i++)
	{
		cin >> input[i];

		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] += ' '; // int·Î´Â 32
		}
		else if (input[i] >= 'a' && input[i] <= 'z')
		{
			input[i] -= ' ';
		}

		cout << input[i] << " ";
	}

	return 0;
}