#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;

    if (b + c > 59)
    {
        a += (b + c) / 60;

        if (((b + c) % 60) == 0)
        {
            b = 0;
        }
        else
        {
            b = (b + c)%60;
        }
    }
    else
    {
        b += c;
    }

    if (a > 23)
    {
        a -= 24;
    }

    cout << a << ' ' << b;

    return 0;
}