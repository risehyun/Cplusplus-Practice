#include <iostream>


char path[5] = "";
void test(int level)
{
	// ����Լ��� �ϴ� �����ؼ� ������ �ϵ� Ư�� �������� return�� �ؼ� ������� ������ ������� Ư�� ������ ���ܽ�Ŵ
	// ������ ������ ��� �̷��� ó���ϸ� ��������
	if (path[0] == 'A')
	{
		return;
	}

	if (level == 3)
	{
		std::cout << path << std::endl;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		// ��� �Լ� ȣ�� ���� ������ ������ path�� �̸� ����ؼ� �������ǿ� �ش��ϸ� �ƿ� �������� ���� �ʴ� ���
		// ������ �����ϴٸ� ���� �ϴ� ������ return ��Ű�� �ͺ��� ���⼭ üũ�ϰ� �Ѿ�� �͵� ����
		//if (level == 0 && ('A' + i) == 'A')
		//{
		//	continue;
		//}

		path[level] = 'A' + i;
		test(level + 1);
		path[level] = 0;
	}
}

int main()
{
	test(0);

	return 0;
}