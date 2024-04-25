#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	cin >> num;

	if (num > 0)
	{
		cout << "###\n###\n###";
	}
	else if (num < 0)
	{
		cout << "$$$\n$$$";
	}

	return 0;
}