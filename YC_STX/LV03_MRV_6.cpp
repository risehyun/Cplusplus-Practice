#include <iostream>

using namespace std;

int findWinner(int people, int win[2][3])
{
	int bucket[10] = {};


	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (win[y][x] == people)
			{
				bucket[people]++;
			}
		}

	}

	for (int i = 0; i < 10; i++)
	{
		if (bucket[i] != 0)
		{
			return 1;
		}
	}

	return 0;

}

int main()
{
	int win[2][3] = 
	{
		{ 3, 5, 1 },
		{ 4, 2, 6 }
	};

	int people[4] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> people[i];
	}

	for (int i = 0; i < 4; i++)
	{
		int result = findWinner(people[i], win);

		if (result == 1)
		{
			cout << people[i] << "번 합격" << endl;
		}
		else
		{
			cout << people[i] << "번 불합격" << endl;
		}

	}

	return 0;
}