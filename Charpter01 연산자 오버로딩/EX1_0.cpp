#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);

	int n = 0, m = 0;
	cin >> n >> m;

	vector<string>input(n);
	vector<string>result;

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	sort(input.begin(), input.end());

	string target = "";
	int count = 0;
	for (int i = 0; i < m; i++) 
	{
		cin >> target;

		if (binary_search(input.begin(), input.end(), target))
		{
			count++;
		}
	}

	cout << count << '\n';
}