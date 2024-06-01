#include <iostream>

using namespace std;

struct sketchbook
{
	char image[3][3];
};

int main()
{
	sketchbook book;

	char bucket[256] = {};

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> book.image[y][x];
			bucket[book.image[y][x]]++;
		}
	}

	for (int i = 1; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			cout << (char)i;
		}
	}

	return 0;
}