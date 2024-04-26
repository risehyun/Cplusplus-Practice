#include <iostream>

using namespace std;

int main()
{
	int a = 0, x = 0;

	cin >> a >> x;

	int index = a - x;

	for (int i = a - 1; i >= index; i--)
	{
		cout << i << " ";
	}

	return 0;
}