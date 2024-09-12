//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() 
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); 
//	cout.tie(0);
//
//	// 숫자의 개수와 누적합을 구할 횟수
//	int n = 0, m = 0;
//
//	cin >> n >> m;
//
//	vector<int>input(n);
//	vector<int>result(m);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input[i];
//	}
//
//	for (int k = 0; k < m; k++)
//	{
//		int i = 0, j = 0, sum = 0;
//
//		cin >> i >> j;
//
//		for (int index = i; index <= j; index++)
//		{
//			sum += input[index-1];
//		}
//
//		result[k] = sum;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cout << result[i] << '\n';
//	}
//
//	return 0;
//}
// 이렇게 풀면 시간 초과가 되기 때문에 누적합으로 풀어야 한다.

#include <iostream>

using namespace std;
#define MAX 100001

int N, M;
int arr[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    //배열 입력 받기
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    //배열을 누적합로 변경
    for (int i = 1; i <= N; i++)
        arr[i] += arr[i - 1];

    //구간 입력 받고 누적 합 출력
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;

        cout << arr[y - 1] - arr[x - 2] << "\n";
    }
}