#include <iostream>

using namespace std;
int main()
{
	int input = 0;

	cin >> input;

	cout << "����" << input / 1000 << endl;
	cout << "����" << (input % 1000) / 100 << endl;
	cout << "����" << (input % 100) / 10 << endl;
	cout << "����" << input % 10 << endl;

	return 0;
}