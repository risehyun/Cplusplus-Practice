#include <iostream>
using namespace std;

int main() 
{
    int a1 = 0, a0 = 0, c = 0, n0 = 0;

    cin >> a1 >> a0 >> c >> n0;

    if (a1 * n0 + a0 <= c * n0 && a1 <= c)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
