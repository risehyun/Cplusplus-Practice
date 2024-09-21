#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
int N = 0, T = 0, cnt = 1;

int main() 
{
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	while (N--) 
	{
		cin >> T;

		if (T == cnt)
		{
			cnt++;
		}
		else
		{
			s.push(T);
		}

		while (!s.empty() && s.top() == cnt) 
		{
			s.pop();
			cnt++;
		}
	}

	if (s.empty())
	{
		cout << "Nice";
	}
	else
	{
		cout << "Sad";
	}

	return 0;
}