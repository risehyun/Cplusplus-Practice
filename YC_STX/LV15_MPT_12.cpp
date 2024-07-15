#include <iostream>

using namespace std;
int main()
{
    /*
        1. Amy
        2. Bob
        3. Chloe
        4. Diane
        5. Edger
    */
    int map[5][5] =
    {
//              A B C D E
        /*A*/ { 0,0,0,0,1 },
        /*B*/ { 1,0,0,0,0 },
        /*C*/ { 0,1,0,0,0 },
        /*D*/ { 0,1,0,0,0 },
        /*E*/ { 0,0,0,0,0 }
    };

    int count[5] = {};

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (map[y][x] == 1)
            {
                count[x]++;
            }
        }
    }

    int max = -1;
    int maxIndex = -1;

    for (int i = 0; i < 5; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            maxIndex = i;
        }
    }

    if (maxIndex == 0)
    {
        cout << "Amy";
    }
    else if (maxIndex == 1)
    {
        cout << "Bob";
    }
    else if (maxIndex == 2)
    {
        cout << "Chloe";
    }
    else if (maxIndex == 3)
    {
        cout << "Diane";
    }
    else if (maxIndex == 4)
    {
        cout << "Edger";
    }

    return 0;
}