#include <iostream>

using namespace std;

class Shape
{
private:
	int type_;
	double len_;

	const double PI;
	static int rectCount;
	static int circleCount;

public:
	Shape(int _type = 1, int _len = 1) 
	: type_(_type), len_(_len), PI(3.14)
	{
		if (type_ == 1)
		{
			rectCount++;
		}
		else if (type_ == 2)
		{
			circleCount++;
		}
	}

	~Shape() {
		if (type_ == 1)
		{
			rectCount--;
		}

		else if (type_ == 2)
		{
			circleCount--;
		}
	}

	double GetArea()
	{
		if (type_ == 1)
		{
			return (len_ * len_);
		}
		else if (type_ == 2)
		{
			return (PI * len_ * len_);
		}
	}

	int GetRectCount()
	{
		return rectCount;
	}

	int GetCircleCount()
	{
		return circleCount;
	}
};

int Shape::rectCount = 0;
int Shape::circleCount = 0;

int main()
{
	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "�簢�� ����     : " << shape1.GetRectCount() << endl;
	cout << "�� ����         : " << shape1.GetCircleCount() << endl;
	cout << "shape2�� ����   : " << shape1.GetArea() << endl;

	delete[] p_rect;

	cout << "�簢�� ����     : " << shape2.GetRectCount() << endl;
	cout << "�� ����         : " << shape2.GetCircleCount() << endl;
	cout << "shape2�� ����   : " << shape2.GetArea() << endl;

	return 0;
}