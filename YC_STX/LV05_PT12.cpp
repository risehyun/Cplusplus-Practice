#include <iostream>

using namespace std;

void QTR()
{
	cout << "QTR100%";
}

void BBQ()
{
	cout << "BBQ100%";
}

int main()
{
	int arr[3] = { 0 };
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	if (sum >= 10)
	{
		QTR();
	}
	else
	{
		BBQ();
	}

	return 0;
}