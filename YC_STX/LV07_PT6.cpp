#include <iostream>

using namespace std;
int main()
{
	int input = 0;


	for (int i = 0; i < 4; i++)
	{
		cin >> input;

		if (input < 20)
		{
			cout << "�� ū���� �Է��ϼ���" << endl;
		}
		else if (input > 20)
		{
			cout << "�� ���� ���� �Է��ϼ���" << endl;
		}
		else if (input == 20)
		{
			cout << "�����Դϴ�" << endl;
		}
	}

	return 0;
}