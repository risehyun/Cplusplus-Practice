#include <iostream>

using namespace std;
int main()
{
	int input = 0;


	for (int i = 0; i < 4; i++)
	{
		cin >> input;

		if (input < 20)
		{
			cout << "더 큰수를 입력하세요" << endl;
		}
		else if (input > 20)
		{
			cout << "더 작은 수를 입력하세요" << endl;
		}
		else if (input == 20)
		{
			cout << "정답입니다" << endl;
		}
	}

	return 0;
}