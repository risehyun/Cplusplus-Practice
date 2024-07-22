#include <iostream>

using namespace std;

int input[5] = {};

int run()
{

	for (int i = 0; i < 4; i++)
	{
		if (input[i] > input[i+1])
		{
			return 0;
		}
	}

	return 1;

}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}

	int result = run();

	if (result == 0)
	{
		cout << "Áõ°¡¾ÈµÊ";
	}
	else
	{
		cout << "Áõ°¡µÊ";
	}
		
	return 0;
}