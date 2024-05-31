#include <iostream>

using namespace std;

struct Train 
{
	int win;
	char name[7];
};

int findTrain(Train* train, char* name, int* age)
{
	int flag = -1;

	for (int i = 0; i < 7; i++)
	{
		if (train[i].win == *age)
		{
			for (int i = 0; i < 7; i++)
			{
				if (train[i].name[i] != name[i])
				{
					flag = 0;
				}
				else
				{
					flag = 1;
				}
			}

			if (flag == 1)
			{
				return i;
			}
		}
	}

	return 0;
}

int main()
{
	Train train[7] =
	{ { 15, "summer" }, { 33, "cloe" }, { 24, "summer" }, { 28, "niki" }, { 32, "jenny" }, { 20, "summer" }, { 40, "coco" } };

	char name[7] = "";
	int age;

	cin >> name;
	cin >> age;

	int result = findTrain(train, name, &age);

	cout << result;

	return 0;
}