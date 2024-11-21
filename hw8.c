#include <stdio.h>
#include <math.h>

double csd(double data[], int size) 
{
    double sum = 0.0, mean, num = 0.0;

    for (int i = 0; i < size; ++i)
    {
        sum += data[i];
    }
    mean = sum / size;

    // 분산을 계산
    for (int i = 0; i < size; ++i)
    {
        num += pow(data[i] - mean, 2);
    }

    return sqrt(num / size);  // 표준편차 계산
}

int main()
{
    double numbers[5];
    int size = 5;

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < size; ++i)
    {
        scanf("%lf", &numbers[i]);
    }

    double num1 = csd(numbers, size);
    printf("Standard Deviation = %.3lf\n", num1);

    return 0;
}
