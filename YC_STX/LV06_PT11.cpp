#include <iostream>

using namespace std;
int main()
{
	char input1 = ' ', input2 = ' ';

	cin >> input1 >> input2;

	for (int i = 0; i < 4; i++)
	{
		for (int j = input1; j <= input2; j++)
		{
			cout << (char)j << " ";
		}

		cout << endl;
	}


	return 0;
}