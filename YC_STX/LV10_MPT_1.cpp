#include <iostream>

using namespace std;

struct BBQ
{
	int a;
	int b;
};

int main()
{
	BBQ* aa = new BBQ;
	BBQ* bb = new BBQ;

	cin >> aa->a >> bb->b;

	cout << aa->a + 5 << " " << bb->b + 5;

	return 0;
}