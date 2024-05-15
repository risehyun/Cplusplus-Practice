#include <iostream>

using namespace std;

// 3. 문장에 입력받은 a의 문자값이 있다면
// 4. b의 문자값으로 바꿔주는 함수 작성

void changeStr(char* str, char input, char result)
{

	// 4-1 문장의 길이를 구하기

	int length = 0;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			length = i;
			break;
		}
	}

	for (int i = 0; i < length; i++)
	{
		// 4-2 문장 안에 a 문자값이 있는지 확인
		if (str[i] == input)
		{
			// 4-3 b의 문자값으로 변환
			str[i] = result;
		}

	}

}

int main()
{
	// 1. 문장을 하나 입력받기
	char str[100] = "";
	cin >> str;

	// 2. 각각의 변수 a, b에 문자 입력 받기
	char a = ' ', b = ' ';
	cin >> a >> b;

	changeStr(str, a, b);

	cout << str;

	return 0;
}