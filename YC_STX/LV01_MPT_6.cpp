#include <iostream>

using namespace std;

void max(char* input, int* maxIndex)
{

	int length = 0;
	int max = 0;
	char temp = input[0];

	// ���� ���� ����
	for (int i = 0; i < 11; i++)
	{
		if (input[i] == '\0')
		{
			length = i;
			break;
		}
	}

	// ���ڸ� �ϳ��� ���ؼ� max�� ����
	for (int i = 0; i < length; i++)
	{
		if (temp < input[i])
		{
			temp = input[i];
			max = i;
		}

	}

	*maxIndex = max;
}

void min(char* input, int* minIndex)
{

	int length = 0;
	int min = 0;
	char temp = input[0];

	// ���� ���� ����
	for (int i = 0; i < 11; i++)
	{
		if (input[i] == '\0')
		{
			length = i;
			break;
		}
	}

	// ���ڸ� �ϳ��� ���ؼ� max�� ����
	for (int i = 0; i < length; i++)
	{
		if (temp > input[i])
		{
			temp = input[i];
			min = i;
		}

	}

	*minIndex = min;
}

int main()
{
	char str[11] = "";

	cin >> str;

	int maxIndex = 0;
	int minIndex = 0;

	max(str, &maxIndex);
	min(str, &minIndex);

	cout << maxIndex << endl,
	cout << minIndex;

	return 0;
}