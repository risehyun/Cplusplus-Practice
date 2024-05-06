#include <iostream>

using namespace std;
int main()
{

	int input = 0;
	
	cin >> input;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 4; j > 0; j--)
		{
			cout << input;
		}

		input--;
		cout << endl;
	}


	return 0;
}