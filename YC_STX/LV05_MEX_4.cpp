#include <iostream>


void test(int x) {
    // x ���� 0���� �۾����� return �մϴ�.
    if (x < 0) {
        return;
    }
    // 1. ���⼭���� ����˴ϴ�.
    std::cout << x << " " << std::endl;
    test(x - 1);

    // 3. �ٽ� �Ųٷ� ���. ��, x�� 0�� �ƴ� ������ �����մϴ�
    if (x > 0) {
        std::cout << x << " " << std::endl;
    }
}

char main() {
    // ���� x �Է� �ޱ�
    int x;
    std::cin >> x;
    // x������ test ����
    test(x);
    return 0;

}