#include <iostream>

using namespace std;
int main()
{
	int bucket[256] = {};
	char cardList[16] = "";

	int length = 0;
	int count = 0;

	cin >> cardList;

	// 1. 입력받은 리스트의 길이 확인 (공백 부분을 카운팅 하지 않기 위해서 올바른 길이에 맞춰줘야 한다)
	for (size_t i = 0; i < 16; i++)
	{
		if (cardList[i] != '\0')
		{
			length++;
		}
	}

	// 2. 알파벳 갯수 확인하기
	for (size_t i = 0; i < length; i++)
	{
		// 아스키코드 자체를 인덱스로 사용
		// 알파벳 갯수를 확인
		bucket[cardList[i]]++;
	}

	// 3. 알파벳이 존재하는 경우 종류만큼 count 하기
	for (size_t x = 0; x < 256; x++)
	{
		// 알파벳이 존재한다면
		if (bucket[x] != 0) {
			// 사용된 알파벳의 종류만큼 count 증가
			count++;
		}
	}

	// 4. 최종 결과를 출력
	std::cout << count << "개";

	return 0;
}