#include <iostream>

using namespace std;
int main()
{
	int arr[3][4] = {};
	int input = 0;
	int num = 12;

	// �� ä���
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num;
			num--;
		}
	}

	// ���� 1�� �Է¹ޱ�
	cin >> input;

	// �Է¹��� ���ڿ� �ش��ϴ� ���� ���� 0���� ä���
	for (int y = 0; y < 3; y++)
	{
		arr[y][input] = 0;
	}

	// ��� ���
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x];
		}

		cout << endl;
	}

	return 0;
}