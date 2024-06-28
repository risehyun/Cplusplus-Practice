#include <iostream>

using namespace std;

int arr[7] = { 3, 5, 5, 6, 9, 1, 2 };

void reverse(int start, int end)
{
	int temp = 0;

	while (start < end) {
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main()
{
	int start = 0, end = 0;

	cin >> start >> end;

	reverse(start, end);

	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}