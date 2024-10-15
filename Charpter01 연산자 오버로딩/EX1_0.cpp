#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int c;
int n;

int main()
{
    cin >> c;

    vector<int> factor;

    for (int i = 0; i < c; i++)
    {
        cin >> n;
        factor.push_back(n);
    }

    sort(factor.begin(), factor.end());
    int fir = factor.front();
    int sec = factor.back();
    cout << fir * sec;
}