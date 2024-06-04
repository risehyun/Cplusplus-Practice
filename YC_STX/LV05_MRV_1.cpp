#include <iostream>

using namespace std;

void BBQ(int x)
{

	if (x == 3)
	{
		return;
	}

	BBQ(x + 1);


}


int main()
{

	BBQ(0);

	return 0;
}