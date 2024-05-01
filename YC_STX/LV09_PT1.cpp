#include <iostream>

using namespace std;
int main()
{
	int arr[8] = { 4, 3, 6, 1, 3, 1, 5, 3 };

	int input = 0, count = 0;

	cin >> input;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == input)
		{
			count++;
		}
	}

	cout << "숫자 " << input << "개수는 " << count << "개";

	return 0;
}