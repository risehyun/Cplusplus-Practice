#include <iostream>


// ������ �ϸ� �ٷ� ���������� ����� ���� �ƴ϶� 
// �ش� �Լ��� ���������� �� ������ �ϳ� �������鼭,
// ������ ����Լ��� ȣ��Ǿ��� �Լ��� ���ϵǱ� ������
// �Լ� ȣ�� ������ �ٸ� �ڵ尡 �ִٸ�
// ���ϵǸ鼭 �ش� �ڵ尡 �ִ� ������ ���� ����Ǿ� ���������� �������� ���������� �ȴ�.

int arr[5] = { 5, 7, 1, 2, 3 };

void test(int x) {

    if (x == 5) {
        return;
    }

    std::cout << arr[x] << " " << std::endl;
    test(x + 1);
    std::cout << arr[x] << " " << std::endl;
}

char main() {

    test(0);
    return 0;

}