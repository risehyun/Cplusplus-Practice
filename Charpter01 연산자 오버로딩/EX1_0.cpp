#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int N; // B진법 수 N
	int B; // B진법
	string result = "";

	cin >> N >> B;

	while (N != 0)
	{
		int temp = N % B;

		// 숫자라면 해당 문자에서 '0'을 더해 그 숫자에 해당하는 문자로 만듦
		if (0 <= temp && temp <= 9)
		{
			result += (temp + '0');
		}
		// 값이 10 이상의 숫자일 경우 알파벳으로 출력 되야 한다.
		// 따라서 - 10 + 'A'를 해서 문자로 만듦
		// 예를 들어 10의 경우 문자 A로 나타내기 때문에
		// 10을 A에 해당하는 65로 만들어 줘야 한다.
		// 따라서 10에 -10을 빼서 0으로 만들어 준 다음 다시 'A'를 더해서
		// 10 == 'A'가 되도록 한다.
		else
		{
			result += (temp - 10 + 'A');
		}

		N /= B;
	}

	int endIndex = result.length() - 1;

	// 뒤에서부터 진법 변환 결과를 하나씩 출력한다
	// reverse를 써서 아예 result를 뒤집어서 출력하는 방법도 있음
	for (int i = endIndex; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}