#include <iostream>

using namespace std;
int main()
{
	int* ptr_int = new int;
	*ptr_int = 100;

	double* ptr_double = new double;

	*ptr_double = 100.123;

	cout << "int�� ������ ���� " << *ptr_int << "�Դϴ�." << endl;
	cout << "int�� ������ �޸� �ּҴ� " << ptr_int << "�Դϴ�." << endl;

	cout << "double�� ������ ���� " << *ptr_double << "�Դϴ�." << endl;
	cout << "double�� ������ �޸� �ּҴ� " << ptr_double << "�Դϴ�." << endl;

	return 0;
}