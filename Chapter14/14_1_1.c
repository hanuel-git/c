#include<stdio.h>

int SquareByValue(int num)
{
	int result = num * num;
	return result;
}

void SquareByReference(int* param)
{
	int result = (*param) * (*param);
	*param = result;
}

int main(void)
{
	int input;
	printf("Please enter number :");
	scanf_s("%d", &input);

	printf("%d\n", SquareByValue(input));
	SquareByReference(&input);
	printf("The result is %d", input);

	return 0;
}