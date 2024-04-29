#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	for (int i = 0; i < c; i++)
	{
		for (int j = a; j <= b; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}

	return 0;
}