#include <iostream>

using namespace std;



void run(string str)
{
	int strLength = str.length();
	int leftCount = 0, rightCount = 0;

	for (int i = 0; i < strLength; i++)
	{
		if (str[i] == '<')
		{
			leftCount++;
		}
		else if (str[i] == '>')
		{
			rightCount++;

			// ������ ������ ���ʺ��� ���� ���� ������
			if (leftCount == 0)
			{
				cout << "������";
				return;
			}
		}
	}

	// �� �������� ���̰� �ִٸ� ������
	if (leftCount != rightCount)
	{
		cout << "������";
		return;
	}

//	cout << leftCount << ", " << rightCount << endl;
	// ��� ��쿡�� ������ �ʴ� ��� ���� ��� �� ����
	cout << "����";

	return;

}

int main()
{

	string str = "";

	cin >> str;

	run(str);

	return 0;
}