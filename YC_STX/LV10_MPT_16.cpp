#include <iostream>

class Shape
{
private:
	int type_;
	double len_;

public:
	Shape() {};

	Shape(int _type, double _len) : type_(_type), len_(_len)
	{};




};

int main()
{
	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];


	return 0;
}