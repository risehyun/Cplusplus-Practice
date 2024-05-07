#include <iostream>

using namespace std;


void KFC(int* upperCount, int* lowerCount)
{	
	char str[11] = "";

	cin >> str;

	for (int i = 0; i < 11; i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			// == *upperCount += 1;
			(*upperCount)++;
			// 그냥 ++ 연산을 사용하면 연산자 우선순위 때문에 작업 순서에 문제가 생김
			//*ptr++;    : ptr이 가리키는 위치(포인터)를 1만큼 증가시킨다.
			//(*ptr)++; : ptr가 가리키는 위치(포인터)의 값을 1만큼 증가시킨다.
			// https://blog.naver.com/star7sss/220766291067
		}
		else if ('a' <= str[i] && str[i] <= 'z')
		{
			// == *lowerCount += 1;
			(*lowerCount)++;
		}
	}

}

int main()
{
	int upperCount = 0, lowerCount = 0;

	KFC(&upperCount, &lowerCount);

	cout << "대문자" << upperCount << "개" << endl << "소문자" << lowerCount << "개";


	return 0;
}