#include <iostream>

char* arr = new char[3];

int Check()
{
	for (int i = 0; i < 3; i++)
	{
		if (!(65 <= arr[i] && 90 >= arr[i]))
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	int result = Check();

	if (result == 1)
	{
		std::cout << "모두대문자";
	}
	else
	{
		std::cout << "소문자있음";
	}


	return 0;
}