#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// int 타입 (정수)을 저장하는 컨테이너 v를 생성한다.

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (unsigned int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;	// v[i]는 i번째 index의 정수 반환
	}

	return 0;
}