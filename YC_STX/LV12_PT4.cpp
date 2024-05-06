#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	int num = 1;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << num;
			num++;
		}

		cout << endl;
		num = 1;
	}

	return 0;
}