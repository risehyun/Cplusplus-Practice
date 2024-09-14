#include <iostream>

using namespace std;

const int MAX = 1000001;

int N = 0, M = 0;
long long arr[MAX] = { 0 }, psum[MAX] = { 0 }, cnt[1000] = { 0 };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 1; i <= N; i++) 
    {
        cin >> arr[i];
        psum[i] = (psum[i - 1] + arr[i]) % M;
        cnt[psum[i]]++;
    }

    long long ans = 0;

    for (int i = 0; i < M; i++) 
    {
        ans += cnt[i] * (cnt[i] - 1);
    }

    ans /= 2;
    ans += cnt[0];

    cout << ans;

    return 0;
}