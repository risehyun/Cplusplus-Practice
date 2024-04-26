#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	for (int i = a; i <= b; i++)
	{
		cout << i << " ";
	}

	cout << endl;

	for (int i = a; i <= c; i++)
	{
		cout << i << " ";
	}

	return 0;
}