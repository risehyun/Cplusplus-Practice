/*
	Ŭ������ �̿��� ��ü���� ���α׷����� ����
*/

#include <cstdio>

// �������� �ڵ�
class USERDATA
{
public:
	// ��� ���� ����
	int nAge;
	char szName[32];

	// ��� �Լ� ���� �� ����
	void Print(void)
	{
		// nAge�� szName�� Print() �Լ��� ���� ������ �ƴϴ�.
		// Print() �Լ��� �����ϰ� Ŭ���� �ȿ� �����ϴ� Ŭ���� ��� �����̴�.
		printf("%d, %s\n", nAge, szName);
	}

};

// ������� �ڵ�
int main()
{
	USERDATA user = { 10, "ö��" };
	user.Print();


	return 0;
}