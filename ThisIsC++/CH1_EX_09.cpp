/*
	������ ���� ȣ��
*/

#include <iostream>

using namespace std;

void TestFunc(int& rParam)
{
	// ��ȣ���� �Լ����� ������ ���� �����ߴ�.
	rParam = 100;
}

int main(void)
{
	int nData = 0;

	// ������ ���� �μ� �����̴�.
	TestFunc(nData); // �Ű������� �����ϴ� nData�� ������ ������ rParam�� �ȴ�.
	cout << nData << endl;

	return 0;
}