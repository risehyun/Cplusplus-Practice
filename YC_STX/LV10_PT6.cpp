#include <iostream>

using namespace std;
int main()
{
	int arr[4][4] = {};
	int temp[4][4] = {};

	int num = 1;

	// �迭�� ���� ������� �� ä���ش�.
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num;
			num++;
		}
	}

	// ȸ�� ��Ģ�� ������ ������ ���� �ӽ� �迭�� �ִ´�.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[j][4-i-1] = arr[i][j];
		}
	}

	// ���� �迭�� �ӽ� �迭�� �������ָ� �ϳ��� ����Ѵ�.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = temp[i][j];
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}