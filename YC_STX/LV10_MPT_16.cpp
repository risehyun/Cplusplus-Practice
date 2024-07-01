#include <iostream>

using namespace std;

class Shape
{
private:
	int type_;
	double len_;
	const double PI = 3.14;
	static int rectCount;
	static int circleCount;

public:
	Shape() { };

	Shape(int _type, double _len) : type_(_type), len_(_len)
	{
		if (type_ == 1)
		{
			rectCount++;
		}
		else
		{
			circleCount++;
		}

	};

	~Shape()
	{
		if (type_ == 1)
		{
			rectCount--;
		}
		else
		{
			circleCount--;
		}
	}

	static int GetRectCount()
	{
		return rectCount;
	}

	static int GetCircleCount()
	{
		return circleCount;
	}

	/*
		<도형 타입에 따라 다르게 출력할 것>
		1번 -> 정사각형
		2번 -> 원
	*/
	double GetArea() const
	{
		if (type_ == 1) // 정사각형
		{
			return (len_ * len_);
		}
		else // 원
		{
			return (PI * len_ * len_);
		}
	}
};

int Shape::rectCount = 0;
int Shape::circleCount = 0;

int main()
{
	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "사각형 개수    : " << Shape::GetRectCount() << endl;
	cout << "원 개수        : " << Shape::GetCircleCount() << endl;
	cout << "shape2의 면적  : " << shape1.GetArea() << endl;
 
	delete[] p_rect;

	cout << "사각형 개수    : " << Shape::GetRectCount() << endl;
	cout << "원 개수        : " << Shape::GetCircleCount() << endl;
	cout << "shape2의 면적  : " << shape2.GetArea() << endl;

	return 0;
}