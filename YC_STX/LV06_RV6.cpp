#include <iostream>

using namespace std;
int main()
{
	char arr[5] = { ' ' };

	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		if (arr[i] >= '0' && arr[i] <= '9')
		{
			count++;
		}
	}

	if (count != 0)
	{
		cout << "숫자" << count << "개발견";
	}
	else
	{
		cout << "숫자미발견";
	}



	return 0;
}