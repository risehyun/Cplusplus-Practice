#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	list<int> lt;
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	sort(v.begin(), v.end());
//	sort(lt.begin(), lt.end());	// 컴파일 에러 -> list는 임의 접근 반복자가 아닌
								// 양방향 반복자를 사용하기 때문에 별도의 sort를 써야한다

	return 0;
}