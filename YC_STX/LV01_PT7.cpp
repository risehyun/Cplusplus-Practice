#include <iostream>
using namespace std;

int main()
{
	int t = 5;
	cout << "t���� 1�� ����=" << t << " ";

	++t;

	cout << t << " ";

	++t;

	cout << t << "\n";

	t = 5;
	
	std::cout << "t���� 2�� ����=" << t << " ";

	t -= 2;

	cout << t << " ";

	t -= 2;

	cout << t << "\n";

	return 0;
}