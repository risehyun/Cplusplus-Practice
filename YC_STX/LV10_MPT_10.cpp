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
		cout << "짝이안맞음";
		return;
	}
	else // 일단 1차적으로 두 문자의 갯수가 서로 같음
	{
		bCount = 0, fCount = 0;

		for (int i = 0; i < length; i++)
		{
			// F가 B보다 먼저 시작할 수 없음
			if (input[i] == 'F' && i == 0)
			{
				cout << "짝이안맞음";
				return;
			}
		}
	}

	cout << "짝이맞음";
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