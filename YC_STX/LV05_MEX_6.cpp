// ����
// ��°�� : 0 1 2 3
#include <iostream>
int arr[5] = { 5,7,1,2,3 };

void test(int x)
{
    // ������ ȣ��Ǵ� �Լ��� 
    // �����ؾ� �ϴ°� �޼����̴�.
    if (x == 3)
    {
        return;
    }

    std::cout << arr[x];
    test(x + 1);
}

int main()
{
    test(0);

    return 0;
}