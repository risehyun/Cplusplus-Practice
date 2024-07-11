/*
	vector의 assign()

	생성자에서 뿐만 아니라 모든 시퀀스 컨테이너가 제공하는 assign() 멤버 함수를 사용하면
	컨테이너 생성 이후에도 언제든지해당 컨테이너에 원하는 값을 일괄적으로 할당할 수 있다.
*/



#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(5, 1);	// 초깃값 1로 구성된 5개의 size를 가지는 컨테이너 생성

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	v.assign(5, 2);		// 기존에 v에 존재하던 값 5개를 모두 2로 재할당함

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}