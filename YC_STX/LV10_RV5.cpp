#include <iostream>

using namespace std;
int main()
{
	int arr[6][3] = {};

	int num = 10;

	int a = 0, b = 0;

	// �迭 ä���
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			arr[y][x] = num;
			num++;
		}
	}

	// ���� �ΰ� �Է¹ޱ�
	cin >> a >> b;

	// �Է¹��� ���� ���� �ȿ� �迭 ��Ҹ� 7�� �����ϱ�
	for (int i = a; i <= b; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 7;
		}
	}

	// ��� �迭 ��� ���
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;

	}


	return 0;
}