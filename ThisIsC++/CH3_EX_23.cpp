/*
	���� �ٸ� �ڷ����� ����� ��� �Լ�
*/

#include <iostream>
using namespace std;

void TestFunc(int nParam)
{
	cout << nParam << endl;
}

int main(int argc, char* argv[])
{
	TestFunc(10);
	TestFunc(5.5);

	return 0;
}