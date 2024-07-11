// vector의 생성자

/*
	생성자를 사용해 미리 size를 확보해둘 수 있다.
*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	// v1은 5개의 size를 갖고 기본값 int로 초기화된다.
	vector<int> v1(5); // 0으로 초기화된 size가 5인 컨테이너
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	vector<int> v2(5); // 0으로 초기화된 size가 5인 컨테이너
	v2 [0] = 10;	   // v2[i] => i번째 idx 원소의 참조(기본 배열과 같음)
	v2 [1] = 20;
	v2 [2] = 30;
	v2 [3] = 40;
	v2 [4] = 50;

	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	return 0;
}