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
		<���� Ÿ�Կ� ���� �ٸ��� ����� ��>
		1�� -> ���簢��
		2�� -> ��
	*/
	double GetArea() const
	{
		if (type_ == 1) // ���簢��
		{
			return (len_ * len_);
		}
		else // ��
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

	cout << "�簢�� ����    : " << Shape::GetRectCount() << endl;
	cout << "�� ����        : " << Shape::GetCircleCount() << endl;
	cout << "shape2�� ����  : " << shape1.GetArea() << endl;
 
	delete[] p_rect;

	cout << "�簢�� ����    : " << Shape::GetRectCount() << endl;
	cout << "�� ����        : " << Shape::GetCircleCount() << endl;
	cout << "shape2�� ����  : " << shape2.GetArea() << endl;

	return 0;
}