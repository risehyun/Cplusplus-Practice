#include <iostream>

using namespace std;

int main()
{
	int aList[5] = { 30, 20, 10, 40, 50 };
	int nMax = aList[0];
	int nTmp = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (aList[i] > aList[j])
            {
                nTmp = aList[i];
                aList[i] = aList[j];
                aList[j] = nTmp;
            }
        }
    }
    for (auto n : aList)
        cout << n << ' ';
    cout << endl;
    return 0;
}