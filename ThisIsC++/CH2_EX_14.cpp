/*
	���ӽ����̽��� ���� ������ �˻� �켱��
*/

#include <iostream>

using namespace std;

namespace TEST
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}

int main()
{
	TEST::TestFunc();

	return 0;
}