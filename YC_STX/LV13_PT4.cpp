#include <iostream>

using namespace std;


void KFC(int* upperCount, int* lowerCount)
{	
	char str[11] = "";

	cin >> str;

	for (int i = 0; i < 11; i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			// == *upperCount += 1;
			(*upperCount)++;
			// �׳� ++ ������ ����ϸ� ������ �켱���� ������ �۾� ������ ������ ����
			//*ptr++;    : ptr�� ����Ű�� ��ġ(������)�� 1��ŭ ������Ų��.
			//(*ptr)++; : ptr�� ����Ű�� ��ġ(������)�� ���� 1��ŭ ������Ų��.
			// https://blog.naver.com/star7sss/220766291067
		}
		else if ('a' <= str[i] && str[i] <= 'z')
		{
			// == *lowerCount += 1;
			(*lowerCount)++;
		}
	}

}

int main()
{
	int upperCount = 0, lowerCount = 0;

	KFC(&upperCount, &lowerCount);

	cout << "�빮��" << upperCount << "��" << endl << "�ҹ���" << lowerCount << "��";


	return 0;
}