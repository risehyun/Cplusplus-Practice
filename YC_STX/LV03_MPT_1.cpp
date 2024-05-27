#include <iostream>

using namespace std;
int main()
{
	int bucket[256] = {};
	char cardList[16] = "";

	int length = 0;
	int count = 0;

	cin >> cardList;

	// 1. �Է¹��� ����Ʈ�� ���� Ȯ�� (���� �κ��� ī���� ���� �ʱ� ���ؼ� �ùٸ� ���̿� ������� �Ѵ�)
	for (size_t i = 0; i < 16; i++)
	{
		if (cardList[i] != '\0')
		{
			length++;
		}
	}

	// 2. ���ĺ� ���� Ȯ���ϱ�
	for (size_t i = 0; i < length; i++)
	{
		// �ƽ�Ű�ڵ� ��ü�� �ε����� ���
		// ���ĺ� ������ Ȯ��
		bucket[cardList[i]]++;
	}

	// 3. ���ĺ��� �����ϴ� ��� ������ŭ count �ϱ�
	for (size_t x = 0; x < 256; x++)
	{
		// ���ĺ��� �����Ѵٸ�
		if (bucket[x] != 0) {
			// ���� ���ĺ��� ������ŭ count ����
			count++;
		}
	}

	// 4. ���� ����� ���
	std::cout << count << "��";

	return 0;
}