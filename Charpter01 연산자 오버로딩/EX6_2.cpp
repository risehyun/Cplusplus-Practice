// vector�� size_type(== size_t)

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

	// size_type�� size_t�� �����ϴ�.
	// ������ �ε������� ���� ������ ����� �� �����Ƿ� int ��� size_t�� ����ϴ� ���� �Ǵ�.
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}	

	cout << typeid(vector<int>::size_type).name() << endl;
	
	return 0;
}