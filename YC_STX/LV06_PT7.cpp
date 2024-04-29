#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "#";
		}
		cout << endl;
	}


	return 0;
}