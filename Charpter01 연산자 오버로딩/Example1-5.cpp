// operator+() �Լ� ����

#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
	const Point operator+(const Point& arg)
	{
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;

		return pt;
	}
};

int main()
{
	Point p1(2, 3), p2(5, 5);
	Point result;

	result = p1 + p2;  // => �����Ϸ��� + ��� �����ڸ� �д� ����  
					   // +�� p1.operator+(p2)��� ��ü �ؼ��ؼ� �ش� �̸��� ���� ��� �Լ��� ȣ���Ѵ�.
	result.Print();

	result = p1.operator+(p2); // �����Ϸ��� ���� �Լ��� �ؼ����� �ʾƵ� ��� �Լ��� ���� ȣ���Ѵ�.
	result.Print();

	return 0;
}