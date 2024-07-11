// vector의 size_type(== size_t)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// size_type은 size_t와 동일하다.
	// 벡터의 인덱스에는 음수 개념이 적용될 수 없으므로 int 대신 size_t를 사용하는 것이 옳다.
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}	

	cout << typeid(vector<int>::size_type).name() << endl;
	
	return 0;
}