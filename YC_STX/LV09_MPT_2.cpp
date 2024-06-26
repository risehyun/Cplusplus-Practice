#include <iostream>

using namespace std;
int main()
{

	int a = 0, b = 0, c = 0, d = 0, e = 0;

	int* simData[5] = {&a, &b, &c, &d, &e};

	int max = 0, min = 100;


	cin >> a >> b >> c >> d >> e;

	for (int i = 0; i < 5; i++)
	{
		if (*simData[i] < min)
		{
			min = *simData[i];
		}
		else if (*simData[i] > max)
		{
			max = *simData[i];
		}
	}

	cout << "MAX : " << max << endl;
	cout << "MIN : " << min << endl;

	return 0;
}