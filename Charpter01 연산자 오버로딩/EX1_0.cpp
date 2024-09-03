// 선택정렬

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v;
	int n = 0, index = 0, tmp = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input = 0;
		cin >> input;

		v.push_back(input);
	}

	for (int i = 0; i < n - 1; i++)
	{
		int min = 1001;
		for (int j = i; j < n; j++)
		{
			if (min > v[j])
			{
				min = v[j];
				index = j;
			}
		}

		tmp = v[i];
		v[i] = v[index];
		v[index] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}