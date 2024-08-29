#include<iostream>
#include <queue>

using namespace std;

int main()
{
	int n = 0;

	while (true)
	{
		cin >> n;

		if (n == -1)
		{
			break;
		}

		queue<int> s;
		int sum = 0;

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				s.push(i);
				sum += i;
			}
		}

		if (sum != n)
		{
			cout << n << " is NOT perfect." << '\n';
		}
		else
		{
			cout << n << " = ";

			int size = s.size();
			for (int i = 0; i < size; i++)
			{
				cout << s.front();
				s.pop();

				if (false == s.empty())
				{
					cout << " + ";
				}
			}
			cout << '\n';
		}

	}

	return 0;
}