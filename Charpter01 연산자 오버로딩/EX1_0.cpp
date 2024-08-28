#include<iostream>

using namespace std;

int main()
{
	int n = 0, k = 0;
	int temp = 0, result = 0, count = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		if (count == k)
		{
			break;
		}

		temp = n % i;

		if (temp == 0)
		{
			count++;
			result = i;
		}
	}

	// n의 약수 개수인 count가 k보다 작은 경우가 있을 수 있다.
	// 이 경우에는 k번째 약수가 존재하지 않기 때문에 따로 0을 출력한다.
	if (count < k)
	{
		cout << 0;
	}
	// count가 k보다 큰 경우 해당하는 k번째 약수를 출력해준다.
	else
	{
		cout << result;
	}

	return 0;
}