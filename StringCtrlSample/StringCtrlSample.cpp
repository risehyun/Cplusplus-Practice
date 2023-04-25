#include "CMyString.h"

// 여기서는 사용자 코드를 작성한다.

void TestFunc(const CMyString& param)
{
    cout << param.GetString() << endl;
}

int main()
{
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;
    TestFunc(strData);

    return 0;
}
