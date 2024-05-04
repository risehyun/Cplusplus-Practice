#include <iostream>

using namespace std;

struct Fruit
{
	int size;
	int price;
};

int main()
{
	Fruit banana, apple;

	cin >> banana.size >> apple.size;

	banana.price = banana.size * 250;
	apple.price = apple.size * 500;

	int sumPrice = banana.price + apple.price;

	cout << sumPrice << "¿ø";

	return 0;
}