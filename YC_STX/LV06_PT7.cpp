#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "#";
		}
		cout << endl;
	}


	return 0;
}