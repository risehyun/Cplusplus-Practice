#include <iostream>

using namespace std;

char arr[6] = {
	'D', 'F', 'G', 'D', 'A', 'Q'
};

int main()
{
	char a = ' ', b = ' ';
	int flag = 0;

	cin >> a >> b;

	for (int i = 0; i < 6; i++)
	{
		if (a <= arr[i] && b >= arr[i])
		{
			flag++;
		}
	}

	if (flag > 0)
	{
		cout << "발견!!!";
	}
	else
	{
		cout << "미발견!!!";
	}

	return 0;
}