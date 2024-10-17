#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
vector <vector<int>> v;
int n;
int result = INT_MAX;

int main() 
{

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	vector <vector <int>>dp(n + 1, vector<int>(3, 0));

	for (int i = 1; i <= n; i++) 
	{
		cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
	}

	cout << min(dp[n][0], min(dp[n][1], dp[n][2]));

}
