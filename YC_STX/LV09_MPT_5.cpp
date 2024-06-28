#include <iostream>

using namespace std;

struct NODE
{
	int age;
	NODE* next1;
	NODE* next2;
};

int main()
{
	NODE* head;
	NODE simson;
	NODE woman1;
	NODE woman2;
	NODE man1;
	NODE man2;
	NODE man3;

	head = &simson;

	simson.age = 20;
	simson.next1 = &woman1;
	simson.next2 = &woman2;

	woman1.age = 29;
	woman1.next1 = &man1;
	woman1.next2 = &man2;

	woman2.age = 30;
	woman2.next1 = &woman1;
	woman2.next2 = &man3;

	man1.age = 25;
	man2.age = 40;
	man3.age = 38;

	return 0;
}