#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	for (int i = input; i < input + 3; i++)
	{
		cout << i << i << i << endl;
	}

	return 0;
}