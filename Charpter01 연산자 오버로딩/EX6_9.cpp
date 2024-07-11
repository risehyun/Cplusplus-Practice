/*
	vector의 clear()와 empty()
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(5);	// 기본값이 0이고 size가 5인 vector 생성

	v[0] = 0;
	v[1] = 10;
	v[2] = 20;
	v[3] = 30;
	v[4] = 40;

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	v.clear();
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	if (v.empty())	// v가 비었는지 bool로 return 해줌.
	{
		cout << "v에 원소가 없습니다." << endl;
	}

	return 0;

}