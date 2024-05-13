#include <iostream>

using namespace std;

void Print(int a, int b, int c)
{
	for (int i = 0; i < c; i++)
	{
		for (int j = a; j <= b; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}

}

int main()
{
	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	Print(a, b, c);

	return 0;
}