#include <iostream>
const int N = 8;
int n, m, a[N];

void dfs(int cnt) 
{

    if (cnt == m) 
    {
        for (int i = 0; i < m; i++) std::cout << a[i] << ' ';
        std::cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) 
    {
        a[cnt] = i;
        dfs(cnt + 1);
    }

}

int main() 
{
    std::cin >> n >> m;

    dfs(0);

    return 0;
}