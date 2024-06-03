#include <iostream>

void movement(int* arr, int x)
{
	if (x == 6)
	{
		return;
	}

	std::cout << arr[x] << " ";

	movement(arr, x + 1);

	if (x < 5)
	{
		std::cout << arr[x] << " ";
	}

}

int main()
{
	int input[6] = {};

	for (int i = 0; i < 6; i++)
	{
		std::cin >> input[i];
	}


	movement(input, 0);

	return 0;
}