// operator+() 함수 구현

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

	result = p1 + p2;  // => 컴파일러가 + 라는 연산자를 읽는 순간  
					   // +를 p1.operator+(p2)라고 자체 해석해서 해당 이름을 가진 멤버 함수를 호출한다.
	result.Print();

	result = p1.operator+(p2); // 컴파일러가 따로 함수를 해석하지 않아도 멤버 함수를 직접 호출한다.
	result.Print();

	return 0;
}