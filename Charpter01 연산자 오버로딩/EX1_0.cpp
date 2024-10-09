#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	cout << N * (N - 1);

	return 0;
}