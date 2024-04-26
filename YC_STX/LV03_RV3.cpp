#include <iostream>


using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0;

	cin >> a >> b >> c >> d;

	if (a == 1 && b == 2 && c == 3 && d == 4)
	{ 
		cout << "로그인성공";
	}
	else
	{
		cout << "로그인실패";
	}

	return 0;
}