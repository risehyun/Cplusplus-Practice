#include "CMyString.h"

CMyString TestFunc(void)
{
    CMyString strTest("TestFunc() return");
    cout << strTest << endl;

    return strTest;
}

int main()
{
    // 이름 없는 임시 객체가 만들어진다.
    TestFunc();

    return 0;
}