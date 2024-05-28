#include <iostream>

using namespace std;
int main()
{
	int bucket[65536] = {};

	int list[3][4] =
	{
		{ 65000, 35, 42, 70 },
		{ 70, 35, 65000, 1300 },
		{ 65000, 30000, 38, 42 }
	};

	int maxCount = 0;
	int maxIndex = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			// �ƽ�Ű�ڵ� ��ü�� �ε����� ���
			// ���ĺ� ������ Ȯ��
			bucket[list[y][x]]++;
		}
	}

	for (size_t x = 0; x < 65536; x++)
	{
		// ���ĺ��� �����Ѵٸ�
		if (bucket[x] != 0) {
			// ���� ���ĺ��� ������ �ӽ� ������ ����
			int result = bucket[x];

			// ������� ������ �ִ밪�� ���ؼ� ���� �� ���� ū �ε��� ����
			if (result > maxCount)
			{
				maxCount = result;
				maxIndex = x;
			}
		}
	}

	// ��� ���
	cout << maxIndex << endl;


	return 0;
}