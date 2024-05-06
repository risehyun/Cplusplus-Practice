#include <iostream>

using namespace std;
int main()
{
	char str1[100] = "";
	char str2[100] = "";
	char str3[100] = "";

	int length1 = 0, length2 = 0, length3 = 0;

	cin >> str1 >> str2 >> str3;

	for (int i = 0; i < 100; i++)
	{
		if (str1[i] == '\0')
		{
			length1 = i;
			break; 
			
			// break가 없으면 i가 계속해서 카운팅되고, 
			// 문장이 끝난 이후로는 계속 \0이 들어가있으므로 i가 인덱스 - 1 크기만큼 
			// 즉, 문자열의 끝까지 늘어나게 됨
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (str2[i] == '\0')
		{
			length2 = i;
			break;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (str3[i] == '\0')
		{
			length3 = i;
			break;
		}
	}

	if (length1 >= length2 && length1 >= length3)
	{
		cout << str1;
	}
	else if (length2 >= length1 && length2 >= length3)
	{
		cout << str2;
	}
	else if (length3 >= length1 && length3 >= length2)
	{
		cout << str3;
	}

	return 0;
}