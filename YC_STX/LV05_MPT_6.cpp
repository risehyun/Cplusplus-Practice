#include <iostream>

using namespace std;

void Print(int index, int end)
{

	if (index > end)
	{
		return;
	}

	cout << index << " ";

	Print(index +1, end);

	if (index < 3)
	{
		return;
	}

	if (index != end)
	{
		cout << index << " ";
	}

}


int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	Print(a, b);

	return 0;
}