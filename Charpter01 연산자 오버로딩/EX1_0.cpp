#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);

	int n = 0, k = 0, temp = 0;
	int result = -100000;
	int psum[100001] = { 0 };

	cin >> n >> k;

	for (int i = 1; i <= n; i++) 
	{
		cin >> temp;
		psum[i] = psum[i - 1] + temp;
	}

	for (int i = k; i <= n; i++) 
	{
		result = max(result, psum[i] - psum[i - k]);
	}

	cout << result;

	return 0;
}