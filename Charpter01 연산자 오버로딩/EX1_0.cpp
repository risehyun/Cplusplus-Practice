#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);
	cout.tie(0);

	int N = 0, M = 0, n = 0;
	vector<int> v;

	cin >> N;
	while (N--)
	{
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	cin >> M;

	while (M--)
	{
		cin >> n;
		cout << upper_bound(v.begin(), v.end(), n)
			- lower_bound(v.begin(), v.end(), n) << ' ';
	}
}