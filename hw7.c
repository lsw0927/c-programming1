#include <stdio.h>

int main()
{
    // 두 배열 선언 및 초기화
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    // 배열을 출력하는 초기 상태
    printf("arr1: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // 두 배열의 값을 교환
    int* p1 = arr1;
    int* p2 = arr2;
    for (int i = 0; i < 6; i++)
    {
        int temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    // 교환 후 배열을 출력하는 상태
    printf("\nafter swap\n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
