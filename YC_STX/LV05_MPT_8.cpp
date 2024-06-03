#include <iostream>

using namespace std;

void Print(int index)
{
	if (index == 0)
	{
		return;
	}


	Print(index / 2);

	cout << index << " ";

}

int main()
{
	int index = 0;

	cin >> index;

	Print(index);


	return 0;
}