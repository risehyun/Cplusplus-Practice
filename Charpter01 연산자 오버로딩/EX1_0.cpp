#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input[9] = { 0 };

	for (int i = 0; i < 9; i++)
	{
		cin >> input[i];
	}

	sort(input, input + 9);

	do
	{
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			sum += input[i];
		}

		if (sum == 100)
		{
			break;
		}
	} while (next_permutation(input, input + 9));

	for (int i = 0; i < 7; i++)
	{
		cout << input[i] << '\n';
	}

	return 0;
}