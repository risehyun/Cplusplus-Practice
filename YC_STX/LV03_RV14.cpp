#include <iostream>

using namespace std;
int main()
{
	int id = 0, password = 0;

	cin >> id >> password;

	if (id == 1111 && password == 2222)
	{
		cout << "로그인 성공" << endl;
	}
	else if (id != 1111)
	{
		cout << "아이디가 틀렸습니다." << endl;
	}
	else if (password != 2222)
	{
		cout << "비밀번호가 틀렸습니다." << endl;
	}

	return 0;
}