#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	for (int i = 0; i < c; i++)
	{
		for (int i = a; i <= b; i++)
		{
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}