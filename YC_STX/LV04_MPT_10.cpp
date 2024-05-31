#include <iostream>

using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point& SetX(int _x)
	{
		x = _x;

		return (*this);
	};

	Point& SetY(int _y)
	{
		y = _y;
		return (*this);
	}

	void Print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	Point pt1;

	pt1.SetX(3).SetY(4);
	pt1.Print();

	pt1.SetY(6).SetX(5);
	pt1.Print();

	return 0;
}