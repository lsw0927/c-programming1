#include <stdio.h>

int main(void)
{
	printf("Please input five integers: ");
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nOdd numbers: ");
	for (int j = 0; j < 5; j++)
	{
		if (arr[j] % 2 == 1)
		{
			printf("%d ", arr[j]);
		}
	}
	printf("\nEven numbers: ");
	for (int k = 0; k < 5; k++)
	{
		if (arr[k] % 2 == 0)
		{
			printf("%d ", arr[k]);
		}
	}
	return 0;
}