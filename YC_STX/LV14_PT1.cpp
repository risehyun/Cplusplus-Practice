#include <iostream>

using namespace std;
int main()
{
	int a = 0, b = 0, index = 0;

	cin >> a >> b;

	index = a;

	while (index <= b)
	{
		cout << index << " ";
		index++;
	}

	return 0;
}