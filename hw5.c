#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hw5(int n) {
    if (n > 1)
        hw5(n / 2); // ��� ȣ��� 2�� ������

    printf("%d", n % 2); // ������ ��� (2������ �� �ڸ�)
}

int main() {
    int num;

    // ����ڷκ��� ���� �Է� �ޱ�
    printf("Please enter a number: ");
    scanf_s("%d", &num);

    // 2���� ��ȯ ��� ���
    hw5(num);

    return 0;
}