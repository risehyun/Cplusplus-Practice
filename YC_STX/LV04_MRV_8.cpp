#include <iostream>

using namespace std;

const double PI = 3.14;


class Shape
{
private:
	int type_;
	double len_;

public:

	Shape() {};

	Shape(int _type, int _len) 
	: type_(_type), len_(_len){}

	int GetArea() const
	{
		return 0;
	}
};

int main()
{
	Shape shape1(1, 5);
	Shape shape1(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "사각형 개수";




	return 0;
}