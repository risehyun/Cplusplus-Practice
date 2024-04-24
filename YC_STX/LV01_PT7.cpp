#include <iostream>
using namespace std;

int main()
{
	int t = 5;
	cout << "t에서 1씩 증가=" << t << " ";

	++t;

	cout << t << " ";

	++t;

	cout << t << "\n";

	t = 5;
	
	std::cout << "t에서 2씩 감소=" << t << " ";

	t -= 2;

	cout << t << " ";

	t -= 2;

	cout << t << "\n";

	return 0;
}