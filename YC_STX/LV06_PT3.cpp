#include <iostream>

using namespace std;
int main()
{
	int input = 0;
	
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}


	return 0;
}