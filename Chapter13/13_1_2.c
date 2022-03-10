#include<stdio.h>

int main(void)
{
	int arr[5] = { 1, 2 ,3 ,4 ,5 };
	int* ptr = arr;

	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("%d ", *(ptr + i));
	}

	return 0;
}