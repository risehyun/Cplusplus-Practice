#include <iostream>

using namespace std;

void Swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int arr[6][2] = {};
	int count = 0;

	// �л����� ���� �Է� �ޱ�
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	// ¦�᳢�� ���ڸ� ���ؼ� ���ڰ� �� ū ����� ���ʿ� �ɱ�
	// 1. ��Ģ�� ���� SWAP

	for (int i = 0; i < 6; i++)
	{
		if (arr[i][0] < arr[i][1])
		{
			Swap(arr[i][0], arr[i][1]);
			count++;
		}
	}

	// 2. �ڸ��� ��ü�� ����� �� ������� ���
	cout << "�ڸ��� ��ü�� ��� : " << count << "��";

	return 0;
}