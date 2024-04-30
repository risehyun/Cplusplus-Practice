#include <iostream>

using namespace std;
int main()
{
	int arr[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		cout << i+1 << "번사람은" << arr[i] << "점";

		if (arr[i] >= 70)
		{
			cout << "PASS" << endl;
		}
		else if (arr[i] >= 50)
		{
			cout << "RETEST" << endl;
		}
		else
		{
			cout << "FAIL" << endl;
		}
	}

	return 0;
}