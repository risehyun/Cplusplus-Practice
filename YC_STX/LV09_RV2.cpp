#include <iostream>

using namespace std;
int main()
{
	char arr[5] = {};
	int index[5] = {};
	int count = 0;
	int flag = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		if (arr[i] == 'A')
		{
			count++;

			index[flag] = i;
			flag++;
		}
	}

	cout << "문자 A는 " << count << "개 발견" << endl;
	
	for (int i = 0; i < count; i++)
	{
		cout << index[i] << "번" << endl;
	}



	return 0;
}