#include <iostream>

using namespace std;

struct MC 
{
	char burger1[8];
	char burger2[8];
};

int getLength(char* input)
{
	int length = 0;
	for (int i = 0; i < 8; i++)
	{
		if (input[i] == '\0')
		{
			length = i;
			return length;
		}
	}
}

int main()
{
	MC bob, tom;

	cin >> bob.burger1 >> bob.burger2;
	cin >> tom.burger1 >> tom.burger2;

	cout << "bob.burger1=" << getLength(bob.burger1) << endl;
	cout << "bob.burger2=" << getLength(bob.burger2) << endl;
	cout << "tom.burger1=" << getLength(tom.burger1) << endl;
	cout << "tom.burger2=" << getLength(tom.burger2) << endl;



	return 0;
}