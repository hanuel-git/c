#include<stdio.h>

int main(void)
{
	int a, b;
	printf("Please input two number : ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		int basket;
		basket = a;
		a = b;
		b = basket;
	}

	int divisor;
	
	for (divisor = a; divisor > 0; divisor--)
	{
		if ((a % divisor == 0) && (b % divisor == 0))
			break;
	}
	printf("%d �� %d �� �ִ����� : %d", a, b, divisor);

	return 0;
}