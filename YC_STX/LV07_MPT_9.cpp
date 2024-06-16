#include <iostream>
#include <string>

using namespace std;

string str[5] =
{
	"Jason",
	"Dr.ratio",
	"EXEXI",
	"GK12P",
	"POW"
};

string password = "";

int compareStr()
{
	for (int i = 0; i < 5; i++)
	{
		if (0 == str[i].compare(password))
		{
			return 1;
		}
	}

	return 0;

}

int main()
{


	cin >> password;

	int result = compareStr();

	if (result == 1)
	{
		cout << "암호해제";
	}
	else
	{
		cout << "암호틀림";
	}

	return 0;
}