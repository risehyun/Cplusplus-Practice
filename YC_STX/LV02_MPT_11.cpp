#include <iostream>

using namespace std;

int isSame(char* a, char* b)
{
	
	// 완전히 같은지 알아보는 법
	// 1. 길이가 완전히 같아야 함

	int aLength = 0;
	int bLength = 0;
	int flag = 1;

	for (int i = 0; i < 6; i++)
	{
		if (a[i] == '\0')
		{
			aLength = i;
			break;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		if (b[i] == '\0')
		{
			bLength = i;
			break;
		}
	}

	if (aLength != bLength)
	{
		return 0;
	}

	// 2. 안의 내용이 완전히 같아야 함

	for (int i = 0; i < aLength; i++)
	{
		if (a[i] != b[i])
		{
			flag = 0;
		}
	}

	return flag;
}


int main()
{
	char a[6] = "";
	char b[6] = "";

	int result = 0;

	cin >> a;
	cin >> b;

	result = isSame(a, b);

	if (result == 0)
	{
		cout << "남남";
	}
	else
	{
		cout << "동명";
	}

	return 0;
}