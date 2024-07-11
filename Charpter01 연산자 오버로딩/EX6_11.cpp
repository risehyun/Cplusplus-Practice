/*
	vector의 swap()
	=> swap() 멤버 함수는 모든 컨테이너가 제공하며 두 컨테이너의 원소를 교환할 때 사용한다.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v2;
	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);

	for (size_t i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << ", " << v2[i] << endl;
	}
	cout << endl;

	v1.swap(v2);	// v1과 v2를 swap
	for (size_t i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << ", " << v2[i] << endl;
	}
	cout << endl;

	return 0;
}