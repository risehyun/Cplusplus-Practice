//// Point 객체의 + 연산
//
//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
//	void Print() const { cout << x << ',' << y << endl; }
//};
//
//int main()
//{
//	Point p1(2, 3), p2(5, 5);
//
//	//p1 + p2;  // 컴파일러가 두 객체의 연산에 대해 알지 못하므로 코드를 실행할 수 없다.
//
//	return 0;
//}