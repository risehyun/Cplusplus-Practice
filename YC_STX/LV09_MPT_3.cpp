#include <iostream>

using namespace std;

struct robot
{
	int a;
	int b;
	string t[6];
};

int main()
{

	robot* p;
	robot robert;

	p = &robert;

	cin >> robert.a >> robert.b; 

	cin >> robert.t[0];

	int sum = (p->a) + (p->b);

	cout << sum << " " << p->t[0];



	return 0;
}