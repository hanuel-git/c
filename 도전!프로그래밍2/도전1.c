#include<stdio.h>

void Odd(int* ptr1)
{
	printf("\nȦ�� ��� : ");
	for (int i = 0; i < 10; i++)
	{
		if (ptr1[i] % 2 == 1)
			printf("%d ", ptr1[i]);
	}
	printf("\n");
}

void Even(int* ptr2)
{
	printf("\n¦�� ��� : ");
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
	printf("�� 10���� ���� �Է�\n");

	for (int i = 0; i < 10; i++)
	{
		printf("�Է�:");
		scanf_s("%d", &arr[i]);
	}

	Odd(arr);
	Even(arr);

	return 0;
}