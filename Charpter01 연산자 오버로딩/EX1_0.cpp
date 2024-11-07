#include <iostream>
using namespace std;

int main() 
{
    int n = 0;
    cin >> n;

    for (int y = 1; y <= n; y++)
    {
        for (int x = 1; x <= n - y; x++)
        {
            cout << ' ';
        }
        for (int x = 1; x <= 2 * y - 1; x++)
        {
            cout << '*';
        }

        cout << '\n';
    }
}