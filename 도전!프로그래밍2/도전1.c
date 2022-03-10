#include<stdio.h>

void Odd(int* ptr1)
{
	printf("\n홀수 출력 : ");
	for (int i = 0; i < 10; i++)
	{
		if (ptr1[i] % 2 == 1)
			printf("%d ", ptr1[i]);
	}
	printf("\n");
}

void Even(int* ptr2)
{
	printf("\n짝수 출력 : ");
	for (int i = 0; i < 10; i++)
	{
		if (ptr2[i] % 2 == 0)
			printf("%d ", ptr2[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr[10];
	printf("총 10개의 숫자 입력\n");

	for (int i = 0; i < 10; i++)
	{
		printf("입력:");
		scanf_s("%d", &arr[i]);
	}

	Odd(arr);
	Even(arr);

	return 0;
}