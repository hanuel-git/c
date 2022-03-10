#include<stdio.h>

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int basket;
	basket = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = basket;

	printf("The result is %d %d %d", *ptr1, *ptr2, *ptr3);
}

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	printf("The original is %d %d %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);

	return 0;
}