#include <iostream>

using namespace std;
int main()
{
	// �Է¹��� int �迭
	int input[3][3] = {};

	// ī������ ���� �ε��� �迭
	int bucket[10] = {};

	// �Է��� ����
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> input[y][x];
		}
	}

	// �Է¹��� ���� �ε��� �迭�� ������ŭ ǥ����
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			bucket[input[y][x]]++;
		}
	}

	// �Ҵ簪�� 0�� ��� �������� �ʴ� �ε������ ���̹Ƿ� �ش� �ε����� ����Ͽ� �Ϸ���
	for (int i = 1; i <= 9; i++)
	{
		if (bucket[i] == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}