#include <iostream>

using namespace std;
int main()
{
	int id = 0, password = 0;

	cin >> id >> password;

	if (id == 1111 && password == 2222)
	{
		cout << "�α��� ����" << endl;
	}
	else if (id != 1111)
	{
		cout << "���̵� Ʋ�Ƚ��ϴ�." << endl;
	}
	else if (password != 2222)
	{
		cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl;
	}

	return 0;
}