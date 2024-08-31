#include<iostream>
#include <queue>

using namespace std;

int main()
{
	int angle[3] = { 0 };
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> angle[i];
		sum += angle[i];
	}

	if (angle[0] == 60 && angle[1] == 60 && angle[2] == 60)
	{
		cout << "Equilateral";
	}
	else if (sum == 180)
	{
		if (angle[0] == angle[1]
			|| angle[0] == angle[2]
			|| angle[1] == angle[2])
		{
			cout << "Isosceles";
		}
		else if (angle[0] != angle[1]
			&& angle[0] != angle[2]
			&& angle[1] != angle[2])
		{
			cout << "Scalene";
		}
	}
	else
	{
		cout << "Error";
	}

	return 0;
}