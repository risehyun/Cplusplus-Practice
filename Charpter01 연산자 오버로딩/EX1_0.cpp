#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	cin >> a >> b >> c >> d >> e >> f;

	for (int x = -999; x <= 999; x++)
	{
		for (int y = -999; y <= 999; y++)
		{
			if ((a * x + b * y == c) && (d * x + e * y == f))
			{
				cout << x << ' ' << y;
				break;
			}
		}
	}

	return 0;
}