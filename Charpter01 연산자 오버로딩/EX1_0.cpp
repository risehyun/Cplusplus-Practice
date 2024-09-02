#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n = 0;
	vector<int> v;

	cin >> n;

	// 입력받은 값을 한자리씩 끊어서 벡터에 하나씩 저장
	while (n > 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	// 오름차순으로 sort한 다음
	sort(v.begin(), v.end());

	// reverse 함수로 내부 데이터를 반대로 뒤집어줌
	reverse(v.begin(), v.end());

	// 최종 결과 출력
	for (int i = 0; i < v.size(); i++) 
	{
		cout << v[i];
	}

	return 0;
}