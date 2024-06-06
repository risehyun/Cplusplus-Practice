#include <iostream>

using namespace std;
int main()
{
	int maxIndex = 0;
	int maxLength = 0;

	char str[3][10] =
	{
		"",
		"",
		""
	};

	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}


	// 가장 긴 문장 구하기
	for (int i = 0; i < 3; i++)
	{
		int length = strlen(str[i]);
		if (length > maxLength)
		{
			maxLength = length;
			maxIndex = i;
		}
	}

	char tmp[10] = "";

	strcpy_s(tmp, str[0]);
	strcpy_s(str[0], str[maxIndex]);
	strcpy_s(str[maxIndex], tmp);

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < strlen(str[y]); x++)
		{
			cout << str[y][x];
		}
		cout << endl;
	}

	return 0;
}