#include <iostream>
#include <list>

using namespace std;

struct Point
{
	int x;
	int y;

	Point operator+(Point other)
	{
		Point ret;
		ret.x = x + other.x;
		ret.y = y + other.y;
		return ret;
	}

	Point operator-(Point other)
	{
		Point ret;
		ret.x = x - other.x;
		ret.y = y - other.y;
		return ret;
	}

	Point operator-(int value)
	{
		Point ret;
		ret.x = x - value;
		ret.y = y - value;
		return ret;
	}

	bool operator<(Point other)
	{
		return (x < other.x && y < other.y);
	}
};

int main()
{
	Point p1;
	p1.x = 1;
	p1.y = 1;

	Point p2;
	p2.x = 3;
	p2.y = 2;

	Point p3;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;

	p3 = p1 + p2;
	p3 = p1 - p2; 

	if (p1 < p2)
	{
		int a = 0;
	}

	std::string test = "test";
	test += " success";

	return 0;
}