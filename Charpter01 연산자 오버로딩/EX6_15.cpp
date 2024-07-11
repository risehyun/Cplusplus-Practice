/*
	at()의 out_of_range 예외	

	at() 멤버 함수를 사용하는 경우, 메모리 접근 전에 해당 index의 메모리가 유효한지 검사하여
	만약 유효하지 않은 경우 메모리에 접근하지 않는다.

	그러나 [] 연산자를 사용하는 경우 이러한 검사를 거치지 않기 때문에 곧바로 메모리에 접근하여
	메모리 접근 오류가 발생하게 된다.
*/

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

	try
	{
		cout << v.at(0) << endl;
		cout << v.at(3) << endl;
		cout << v.at(6) << endl;
	}
	catch (out_of_range& e)
	{
		cout << e.what() << endl;
	}

	return 0;

}