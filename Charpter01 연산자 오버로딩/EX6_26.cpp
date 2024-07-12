/*
	< vector와 vector의 비교>

	컨테이너 연산자는 컨테이너와 컨테이너를 비교하기 위해 제공하는 연산으로,
	vector뿐만 아니라 다른 컨테이너 모두 제공하는 연산이다.

	컨테이너 연산자로는 ==, !=, <, <=, >, >=가 있다.
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
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(50);


	// v1과 v2의 원소가 모두 같은지 비교
	if (v1 == v2)
	{
		cout << "v1 == v2" << endl;
	}

	// v1과 v2의 원소가 전부 같지는 않은지 비교
	if (v1 != v2)
	{
		cout << "v1 != v2" << endl;
	}

	// v1과 v2의 순차열 원소를 하나씩 비교해 
	// 한개 이상의 원소에서 v2의 원소가 더 크다면 참
	// v2의 원소가 더 크다면 거짓
	if (v1 < v2)
	{
		cout << "v1 < v2" << endl;
	}

	return 0;
}