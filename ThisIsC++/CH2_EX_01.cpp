#include <iostream>

// nParam �Ű������� ����Ʈ ���� 10�̴�.
int TestFunc(int nParam = 10)
{
	return nParam;
}

int main()
{
	// ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ ���� �����Ѵ�.
	std::cout << TestFunc() << std::endl;							// 10�� ��µȴ�.

	// ȣ���ڰ� ���μ��� ����Ͽ� Ȯ�������Ƿ� ����Ʈ ���� �����ϰ� ����� ���� ����Ѵ�.
	std::cout << TestFunc(20) << std::endl;							// 20�� ��µȴ�.

	return 0;
}