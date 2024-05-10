#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	cout << "숫자" << input / 1000 << endl;
	cout << "숫자" << (input % 1000) / 100 << endl;
	cout << "숫자" << (input % 100) / 10 << endl;
	cout << "숫자" << input % 10 << endl;

	return 0;
}