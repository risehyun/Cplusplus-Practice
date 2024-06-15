#include <iostream>

using namespace std;

void run(int floorLevel)
{


}

char path[10] = "";

int main()
{

	char floorChar = ' ';
	int floorNumber = 1;

	for (int i = 0; i < 5; i++)
	{
		cin >> path;


		if (0 == strcmp(path, "up"))
		{
			floorNumber++;
		}
		else if (0 == strcmp(path, "down"))
		{
			floorNumber--;
		}
	}

	if (floorNumber < 0)
	{
		floorChar = 'B';
		floorNumber = (floorNumber - 1) * -1;
	}

	cout << floorChar << floorNumber;

	




	return 0;
}