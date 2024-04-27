#include <iostream>

using namespace std;
int main()
{
	int index = 0;
	int arr[5] = { 0 };

	arr[0] = 4;
	arr[1] = 1;
	arr[2] = 3;
	arr[3] = 6;
	arr[4] = 9;


	cin >> index;

	cout << index << "번index의값은" << arr[index] << "입니다";


	return 0;
}