#include <iostream>

using namespace std;
int main()
{
	int arr[6] = {};

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] < 5)
		{
			cout << i << "번은" << arr[i] << "점 불합격" << endl;
		}
		else if (arr[i] >= 5)
		{
			cout << i << "번은" << arr[i] << "점 합격" << endl;
		}
	}

	return 0;
}