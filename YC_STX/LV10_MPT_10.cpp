#include <iostream>

using namespace std;

string input = "";

void Run()
{

	int bCount = 0, fCount = 0;

	int length = input.length();

	for (int i = 0; i < length; i++)
	{
		if (input[i] == 'B')
		{
			bCount++;
		}
		else
		{
			fCount++;
		}
	}

	if (bCount != fCount)
	{
		cout << "¦�̾ȸ���";
		return;
	}
	else // �ϴ� 1�������� �� ������ ������ ���� ����
	{
		bCount = 0, fCount = 0;

		for (int i = 0; i < length; i++)
		{
			// F�� B���� ���� ������ �� ����
			if (input[i] == 'F' && i == 0)
			{
				cout << "¦�̾ȸ���";
				return;
			}
		}
	}

	cout << "¦�̸���";
	return;

}

int main()
{

	cin >> input;

	if (input.length() > 10)
	{
		cin >> input;
	}

	Run();

	return 0;
}