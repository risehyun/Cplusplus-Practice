#include <iostream>

using namespace std;

// 3. ���忡 �Է¹��� a�� ���ڰ��� �ִٸ�
// 4. b�� ���ڰ����� �ٲ��ִ� �Լ� �ۼ�

void changeStr(char* str, char input, char result)
{

	// 4-1 ������ ���̸� ���ϱ�

	int length = 0;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			length = i;
			break;
		}
	}

	for (int i = 0; i < length; i++)
	{
		// 4-2 ���� �ȿ� a ���ڰ��� �ִ��� Ȯ��
		if (str[i] == input)
		{
			// 4-3 b�� ���ڰ����� ��ȯ
			str[i] = result;
		}

	}

}

int main()
{
	// 1. ������ �ϳ� �Է¹ޱ�
	char str[100] = "";
	cin >> str;

	// 2. ������ ���� a, b�� ���� �Է� �ޱ�
	char a = ' ', b = ' ';
	cin >> a >> b;

	changeStr(str, a, b);

	cout << str;

	return 0;
}