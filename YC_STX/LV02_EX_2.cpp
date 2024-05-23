/*
	다중 카운트 예제
*/

#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 1, 5, 1, 5, 3 };
	int input[3] = { 1, 2, 3 };

	for (size_t y = 0; y < 3; y++)
	{
		int count = 0;
		for (size_t x = 0; x < 5; x++)
		{
			if (arr[x] == input[y])
			{
				count++;
			}
		}
		std::cout << input[y] << ":" << count;
	}


	return 0;
}