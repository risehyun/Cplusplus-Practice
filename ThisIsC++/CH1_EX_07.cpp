#include <iostream>
using namespace std;

int main()
{
	int* arr = new int[5];

	for (int i = 0; i < 5; ++i)
	{
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	// �迭 ���·� ������ ����� �ݵ�� �迭 ���¸� ���� �����Ѵ�.
	delete[] arr;

	return 0;
}