#include <iostream>

using namespace std;
int main()
{
	char input1 = ' ', input2 = ' ';

	cin >> input1 >> input2;

	for (int i = 0; i < 4; i++)
	{
		for (int i = input1; i <= input2; i++)
		{
			cout << (char)i << " ";
		}

		cout << endl;
	}


	return 0;
}