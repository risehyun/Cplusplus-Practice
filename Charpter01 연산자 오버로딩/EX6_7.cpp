// vector 생성자의 초깃값 지정

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1(5); // int로 구성된, 기본값 0으로 초기화된 size 5짜리 vector
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;


	vector<int> v2(5, 0); // int로 구성된, 지정값 0으로 초기화된 size 5짜리 vector
	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	vector<int> v3(5, 10); // int로 구성된, 지정값 10으로 초기화된 size 5짜리 vector
	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	return 0;
}