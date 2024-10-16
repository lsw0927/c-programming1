#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hw5(int n) {
    if (n > 1)
        hw5(n / 2); // 재귀 호출로 2로 나누기

    printf("%d", n % 2); // 나머지 출력 (2진수의 각 자리)
}

int main() {
    int num;

    // 사용자로부터 정수 입력 받기
    printf("Please enter a number: ");
    scanf_s("%d", &num);

    // 2진수 변환 결과 출력
    hw5(num);

    return 0;
}