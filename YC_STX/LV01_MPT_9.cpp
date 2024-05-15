#include <iostream>

using namespace std;
int main()
{
	int y = 0, x = 0;
	char input = ' ';

	cin >> y >> x >> input;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < x; k++)
			{
				cout << input;
			}

			cout << endl;
		}
	}

	return 0;
}