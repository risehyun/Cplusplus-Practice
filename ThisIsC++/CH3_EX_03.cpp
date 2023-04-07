/*
	����ü�� �Լ� ���踦 ����
*/


#include <stdio.h>

// �������� �ڵ�
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	void(*Print)(struct USERDATA*);
}USERDATA;

void PrintData(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

// ������� �ڵ�
int main(void)
{
	USERDATA user = { 20, "ö��", PrintData };
	//printf("%d %s\n", user.nAge, user.szName);	// 1�ܰ�
	//Printf(&user);								// 2�ܰ�
	user.Print(&user);								// 3�ܰ�

	return 0;
}