#include<stdio.h>

int main(void)
{
	int input;

	printf("input decimal number : ");
	scanf_s("%d", &input);
	printf("decimal number %d is hexadecimal number %x", input, input);

	return 0;
}