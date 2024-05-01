#include <iostream>

using namespace std;

struct Person
{
	int age;
	int height;
};

Person a, b;

void Input()
{
	cin >> a.age >> a.height >> b.age >> b.height;
}

void Output()
{
	int avgAge = (a.age + b.age) / 2;
	int avgHeight = (a.height + b.height) / 2;

	cout << avgAge << " " << avgHeight;
}

int main()
{
	Input();
	Output();

	return 0;
}