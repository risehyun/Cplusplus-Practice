#include <iostream>

using namespace std;



void run(string str)
{
	int strLength = str.length();
	int leftCount = 0, rightCount = 0;

	for (int i = 0; i < strLength; i++)
	{
		if (str[i] == '<')
		{
			leftCount++;
		}
		else if (str[i] == '>')
		{
			rightCount++;

			// 오른쪽 꺽세가 왼쪽보다 먼저 오면 비정상
			if (leftCount == 0)
			{
				cout << "비정상";
				return;
			}
		}
	}

	// 총 갯수에서 차이가 있다면 비정상
	if (leftCount != rightCount)
	{
		cout << "비정상";
		return;
	}

//	cout << leftCount << ", " << rightCount << endl;
	// 어느 경우에도 속하지 않는 경우 정상 출력 후 종료
	cout << "정상";

	return;

}

int main()
{

	string str = "";

	cin >> str;

	run(str);

	return 0;
}