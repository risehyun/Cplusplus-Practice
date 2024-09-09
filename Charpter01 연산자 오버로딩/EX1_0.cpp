#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 0, value = 0;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> value;
        v.push_back(value);
    }

    // 이진 탐색에 들어가기 전에 먼저 벡터 안의 데이터를 sort 해준다.
    sort(v.begin(), v.end());
 
    cin >> n;

    // 이진 탐색 함수를 사용해 벡터 내부에 입력받은 값이 존재하는지 확인한다.
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        cout << binary_search(v.begin(), v.end(), value) << ' ';
    }

}